float angle=0;

//int res=100;

ArrayList<PVector> path;  // 2d vectors

Orbit sun;
Orbit end;
void setup(){

  size(600,600);
  path=new  ArrayList<PVector>();
  
  
  sun=new Orbit(300,300,150,0,null);
  Orbit next=sun;
  
  for(int i=0;i<10;i++){
    next=next.addChild();
  }
  end=next;
  
}

void draw(){

  background(51);

   

  Orbit current=sun;
  
  //for(int i=0;i<res;i++){
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
  
 
 
  path.add(new PVector(end.x,end.y));
  
  //angle+=0.1;
  stroke(255,0,255);
  beginShape();
  strokeWeight(2);
  noFill();
  for(PVector pos:path){
  
  vertex(pos.x,pos.y);
  
  }
  endShape();
}
