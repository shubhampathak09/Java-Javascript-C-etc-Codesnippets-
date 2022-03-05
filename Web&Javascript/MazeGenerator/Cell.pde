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
  }
}
