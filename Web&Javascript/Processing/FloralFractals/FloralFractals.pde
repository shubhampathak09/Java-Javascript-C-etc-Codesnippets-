// Mine Floral

//-----------------Globals
String timestamp; //variable for naming saved frames
float theta;   
float counter = 0;
float noPetals = 4; //number of petals the fractal flower has
float reductionFactor = 0.66; //by what factor should the next branch get reduced by? 0.5 = each branch is half the size of the previous one.
float cutOff = 7; //what is the minimum branch length?  the fractal will continue to be drawn until this minimum size is reached.
float branchFactor = 2 ; //number of branches at each level


/**https://design.tutsplus.com/tutorials/fractal-art-creating-gnarls-in-apophysis--cms-22933 **/


//-----------------Setup
void setup() {
  size(800, 800);
  smooth();
  frameRate(30);
  stroke(255);
}

//-----------------Main Loop
void draw() {
  background(0);
  //increase the angle by one
  counter += 1;
  theta = radians(counter);
  
  //move our origin to the center of the screen
  translate(width/2, height/2);

  //draw the requisite number of petals, rotating by PI / (noPetals/2) each time to draw the right number of petals
  for(int i = 0; i < noPetals; i++) {
    drawPetal();
    rotate(PI / (noPetals/2.0));
  }
}

//-----------------Defined Functions
void branch(float h) {
  //Altered from Daniel Shiffman's fractal tree sketch
  //Decrease the size of the branches
  h *= reductionFactor;

  //if our branch size is large enough to continue,
  if (h > cutOff) {
    //for each branch that we want to draw
    for(int i = 0; i < branchFactor; i++) {
      //rotate the coordinate frame and draw a line.
      pushMatrix();
      rotate(branchFactor*theta/2);
      line(0, 0, 0, -h);
      //then move our origin to the end of the line we just drew
      translate(0, -h);
      //and branch from there
      branch(h);
      popMatrix();

      //repeat for the negative direction
      pushMatrix();
      rotate(-branchFactor*theta/2);
      line(0, 0, 0, -h);
      translate(0, -h);
      branch(h);
      popMatrix();
      
      //if our branching factor is odd, draw a branch without a rotation
      if (branchFactor % 2 != 0) {
        pushMatrix();
        line(0, 0, 0, -h);
        translate(0, -h);
        branch(h);
        popMatrix();
      }
    }
  }
}

void drawPetal() {
  line(0, 0, 0, -height/8);
  translate(0, -height/8);
  branch(height/8);
  translate(0, height/8);
}

//-----------------Interactions
void keyPressed() {
  if (key == ' ') {
      timestamp = year() + nf(month(),2) + nf(day(),2) + "-"  + nf(hour(),2) + nf(minute(),2) + nf(second(),2);
      saveFrame(timestamp+".png");

  }
  
  if (key == CODED) {
    if (keyCode == UP) {
    noPetals++;    
    }
    if (keyCode == DOWN) {
    noPetals--;
    }
    
    if (keyCode == LEFT) {
    branchFactor--;
    }
    
    if (keyCode == RIGHT) {
    branchFactor++;
    }
  } 
  
}
