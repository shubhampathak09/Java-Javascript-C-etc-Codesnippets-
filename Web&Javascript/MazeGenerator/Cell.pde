class Cell
{
 int i;
 int j;
 
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
    noFill();
    line(x,y,x+w,y);
    line(x,y,x,y+w);
    line(x,y+w,x+w,y+w);
    line(x+w,y,x+w,y+w);
  }
}
