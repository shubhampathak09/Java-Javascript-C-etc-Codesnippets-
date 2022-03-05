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
  
  Cell checkNeighbors()
  {
    ArrayList<Cell>neighbors=new ArrayList();
    
    Cell top=grid.get(index(i,j-1));
    Cell right=grid.get(index(i+1,j-1));
    Cell bottom=grid.get(index(i,j+1));
    Cell left=grid.get(index(i-1,j));
    
    
    if(top!=null&&!top.visited){
      neighbors.add(top);
    }
    if(right!=null&&!right.visited){
      neighbors.add(right);
    }
    if(bottom!=null&&!bottom.visited){
      neighbors.add(bottom);
    }
    if(left!=null&&!left.visited){
      neighbors.add(left);
    }
    
    if(neighbors.size()>0)
    {
      int r=floor(random(0,neighbors.size()));
      return neighbors.get(r);
    }else{
      return null;
    }
    
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
