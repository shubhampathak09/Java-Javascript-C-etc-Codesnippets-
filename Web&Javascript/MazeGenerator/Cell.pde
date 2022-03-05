class Cell
{
 int i;
 int j;
 boolean[] walls={true,true,true,true};
 boolean visited=false;
 
  Cell()
  {
  }
  Cell(int x,int y)
  {
    i=x;
    j=y;
  }
  void show()
  {
    int x=this.i*w;
    int y=this.j*w;
    stroke(255);
 //   noFill();
    if(this.walls[0]==true)
    line(x,y,x+w,y);
    
    if(this.walls[1]==true)
    line(x+w,y,x+w,y);  //right
    
    if(this.walls[2]==true)
    line(x+w,y+w,x,y+w);
    
    if(this.walls[3]==true)
    line(x,y+w,x,y);
    
    if(this.visited==true)
    {
      fill(255,0,255,100);
      rect(x,y,w,w);
    }
    
  }
}
