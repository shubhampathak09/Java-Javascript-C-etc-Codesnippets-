float angle=0;

ArrayList<PVector> path;  // 2d vectors

Orbit sun;

void setup(){

  size(600,600);
  path=new  ArrayList<PVector>();
  
  sun=new Orbit(300,300,100,null);
  Orbit next=sun;
  
  for(int i=0;i<3;i++){
    next=next.addChild();
  }
  
  
}

void draw(){

  background(51);

  Orbit current=sun;
  
  while(current!=null){
    
  current.update();  
  current.show();
  current=current.child;
  }
  //float r1=100;
  //float x1=300;
  //float y1=300;
  
  
  //stroke(255);
  
  //strokeWeight(2);
  
  //noFill();
  
  //ellipse(x1,y1,r1*2,r1*2);
  
  //float r2=r1*0.5;

  
  //float rsum=r1+r2;
  
  
  //float x2=x1+rsum*cos(angle);
  //float y2=y1+rsum*sin(angle);
  
  //ellipse(x2,y2,r2*2,r2*2);
 
  //path.add(new PVector(x2,y2));
  
  //angle+=0.1;
  
  //beginShape();
  //for(PVector pos:path){
  
  //vertex(pos.x,pos.y);
  
  //}
  //endShape();
}
