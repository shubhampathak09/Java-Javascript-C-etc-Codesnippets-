int cakeSize = 200;
int candleHeight = 50;
int numCandles = 5;
int candleSpacing;

float time;

void setup() {
  size(600, 400);
  candleSpacing = cakeSize / (numCandles + 1);
}

void draw() {
  background(220);
  
  // Draw cake
  drawCake();
  
  // Animate cake
  time += 0.02;
  float cakeScale = 1 + sin(time) * 0.2;
  float cakeRotation = sin(time) * 0.1;
  
  // Animate candles
  float candleFlicker = noise(time * 2) * 0.2;
  
  // Draw candles
  for (int i = 0; i < numCandles; i++) {
    float x = candleSpacing * (i + 1);
    float y = height - candleHeight;
    
    // Animate candle flickering
    float candleBrightness = noise(time + i) * 100 + candleFlicker * 100;
    
    // Draw candle
    drawCandle(x, y, candleHeight, candleBrightness);
  }
  
}

void drawCake() {
  // Draw cake base
  fill(255, 200, 200);
  stroke(0);
  rectMode(CENTER);
  rect(width/2, height-cakeSize/2, cakeSize, cakeSize/2);
  
  // Draw icing (fractal pattern)
  drawFractalIcing(width/2, height-cakeSize/2, cakeSize/2);
}

void drawCandle(float x, float y, float height, float brightness) {
  // Draw candle body
  fill(255, 255, 0);
  stroke(0);
  rectMode(CENTER);
  rect(x, y - height/2, 10, height);
  
  // Draw candle flame
  fill(255, brightness);
  noStroke();
  triangle(x-5, y - height, x+5, y - height, x, y - height - 30);
}

void drawFractalIcing(float x, float y, float size) {
  // Recursive fractal pattern (example: Sierpinski Triangle)
  if (size > 2) {
    drawFractalIcing(x - size/2, y - size/2, size/2);
    drawFractalIcing(x + size/2, y - size/2, size/2);
    drawFractalIcing(x, y + size/2, size/2);
  }
  
  // Draw icing shape
  fill(200, 200, 255);
  noStroke();
  ellipse(x, y, size, size);
}

void mouseClicked() {
  // Toggle candle lighting on click
  for (int i = 0; i < numCandles; i++) {
    float x = candleSpacing * (i + 1);
    float y = height - candleHeight;
    
    // Check if mouse click is within candle bounds
    if (mouseX > x - 10 && mouseX < x + 10 && mouseY > y - candleHeight && mouseY < y) {
      // Toggle candle lighting
      candleBrightness = candleBrightness == 0 ? 100 : 0;
    }
  }
}
