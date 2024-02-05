// Processing code by Etienne JACOB
// motion blur template by beesandbombs
// opensimplexnoise code in another tab might be necessary
// --> code here : https://gist.github.com/Bleuje/fce86ef35b66c4a2b6a469b27163591e


int[][] result;
float t, c;

float ease(float p) {
  return 3*p*p - 2*p*p*p;
}

float ease(float p, float g) {
  if (p < 0.5) 
    return 0.5 * pow(2*p, g);
  else
    return 1 - 0.5 * pow(2*(1 - p), g);
}

float mn = .5*sqrt(3), ia = atan(sqrt(.5));

void push() {
  pushMatrix();
  pushStyle();
}

void pop() {
  popStyle();
  popMatrix();
}

void draw() {

  if (!recording) {
    t = mouseX*1.0/width;
    c = mouseY*1.0/height;
    if (mousePressed)
      println(c);
    draw_();
  } else {
    for (int i=0; i<width*height; i++)
      for (int a=0; a<3; a++)
        result[i][a] = 0;

    c = 0;
    for (int sa=0; sa<samplesPerFrame; sa++) {
      t = map(frameCount-1 + sa*shutterAngle/samplesPerFrame, 0, numFrames, 0, 1);
      draw_();
      loadPixels();
      for (int i=0; i<pixels.length; i++) {
        result[i][0] += pixels[i] >> 16 & 0xff;
        result[i][1] += pixels[i] >> 8 & 0xff;
        result[i][2] += pixels[i] & 0xff;
      }
    }

    loadPixels();
    for (int i=0; i<pixels.length; i++)
      pixels[i] = 0xff << 24 | 
        int(result[i][0]*1.0/samplesPerFrame) << 16 | 
        int(result[i][1]*1.0/samplesPerFrame) << 8 | 
        int(result[i][2]*1.0/samplesPerFrame);
    updatePixels();

    saveFrame("fr###.gif");
    println(frameCount,"/",numFrames);
    if (frameCount==numFrames)
      exit();
  }
}

//////////////////////////////////////////////////////////////////////////////

int samplesPerFrame = 5;
int numFrames = 60;        
float shutterAngle = .6;

boolean recording = true;

OpenSimplexNoise noise;

float R = 150;

float xh(float p){
  return R/15.0*16*pow(sin(p),3);
}

float yh(float p){
  return  R/15.0*(-13*cos(p) +5*cos(2*p) + 2*cos(3*p) + cos(4*p));
}

int m = 500;

class Thing{
  float seed = random(10,1000);
  float offset = random(TWO_PI);
  
  float ff = random(0.5,2.5);
  float sw = random(0.8,1.8);
  
  float part = 0.1+0.5*pow(random(1),2.0);
  float rf = random(0.5,1.15);
  
  float d = random(10,120);
  
  void show(float q){
    for(int i=0;i<m;i++){
      
      float p = 1.0*i/m;
      float theta = offset + part*TWO_PI*i/m;
      
      float rad = 1.3f;
      float per = 2;
      
      float xx = rf*xh(theta) + pow(p,3.0f)*d*(float)noise.eval(seed + rad*cos(TWO_PI*(per*p-q)),rad*sin(TWO_PI*(per*p-q)));
      float yy = rf*yh(theta) + pow(p,3.0f)*d*(float)noise.eval(2*seed + rad*cos(TWO_PI*(per*p-q)),rad*sin(TWO_PI*(per*p-q)));
      
      strokeWeight(sw);
      stroke(255,ff*18*sin(PI*p));
      
      point(xx,yy);
    }
  }
}

int n = 250;

Thing[] array = new Thing[n];

void setup(){
  size(600,600,P3D);
  result = new int[width*height][3];
  
  noise = new OpenSimplexNoise();
  
  for(int i=0;i<n;i++){
    array[i] = new Thing();
  }
}

void draw_(){
  background(0);
  push();
  translate(width/2,height/2);
  
  for(int i=0;i<n;i++){
    array[i].show(t);
  }
  
  pop();
}
