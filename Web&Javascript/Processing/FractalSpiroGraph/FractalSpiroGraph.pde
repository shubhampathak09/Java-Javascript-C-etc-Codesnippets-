float angle=0;

ArrayList<PVector> path;  // 2d vectors

void setup(){

  size(600,600);
  path=new  ArrayList<PVector>();
}

void draw(){

  background(51);

  float r1=100;
  float x1=300;
  float y1=300;
  
  
  stroke(255);
  
  strokeWeight(2);
  
  noFill();
  
  ellipse(x1,y1,r1*2,r1*2);
  
  float r2=r1*0.5;

  
  float rsum=r1+r2;
  
  
  float x2=x1+rsum*cos(angle);
  float y2=y1+rsum*sin(angle);
  
  ellipse(x2,y2,r2*2,r2*2);
  
  angle+=0.01;
}
