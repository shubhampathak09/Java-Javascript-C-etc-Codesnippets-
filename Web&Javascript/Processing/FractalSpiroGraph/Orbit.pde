class Orbit
{
 float x;
 float y;
 float r;
 Orbit child;
 Orbit parent;
 float speed;
 float angle;
 
 
 
 Orbit(float x_,float y_,float r_,float s,Orbit p)
 {
   
   x=x_;
   y=y_;
   r=r_;
   parent=p;
   speed=s;
   child=null;
 }
 
 Orbit addChild(){
 
   float newr=r/3;
   float newx=x+r+newr;  // can do some variatiions here
   float newy=y;
   child=new Orbit(newx,newy,newr,-2*speed,this);
   return child;
 }
 
 void update(){
   
   if(parent!=null){
   angle +=speed;
   float rsum=r+parent.r;
     
  
   x=parent.x+rsum*cos(angle);
  y=parent.y+rsum*sin(angle);
   }
  //ellipse(x2,y2,r2*2,r2*2);
   
 }
 
 void show(){
 stroke(255);
 strokeWeight(2);
 noFill();
 ellipse(x,y,r*2,r*2);
   
 }
 
 
 
}
