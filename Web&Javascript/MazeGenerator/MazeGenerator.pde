int w=20;
int cols,rows;

ArrayList<Cell>grid=new ArrayList<>();

ArrayList<Cell>stack=new ArrayList<Cell>();


Cell current=new Cell();;
void setup()
{
  
  size(600,600);
  cols=floor(width/w);
  rows=floor(height/w);
  
 // frameRate(5);
  
  for(int j=0;j<rows;j++)
  {
    for(int i=0;i<cols;i++)
    {
      Cell cell=new Cell(i,j);
      grid.add(cell);
    }
  }
  
  current=grid.get(0);
}

void draw()
 {
 
  background(51);
  for(int i=0;i<grid.size();i++)
  grid.get(i).show();
  
  current.visited=true;
  current.highlight();
  
  Cell next=current.checkNeighbors();
  
  if(next!=null)
  {
    next.visited=true;
    
    
    stack.add(current);
    
    // call remove walls
    removeWall(current,next);
    
    current=next;
  }else if(stack.size()>0)
  {
    
    current =stack.remove(stack.size()-1);
  }
  
}

int index(int i,int j)
{
  if(i<0||j<0||i>cols-1||j>rows-1){
    return 0;
}
return i+j*cols;
}


void removeWall(Cell a,Cell b)
{
  //System.out.println("1");
 int x=a.i-b.i;
 if(x==1)
 {
   a.walls[3]=false;
   b.walls[1]=false;
 }else if(x==-1)
 {
  a.walls[1]=false;
  b.walls[3]=false;
 }
  
 int y=a.j-b.j;
 if(y==1)
 {
   a.walls[2]=false;
   b.walls[0]=false;
 }else if(y==-1)
 {
   a.walls[0]=false;
   b.walls[2]=false;
 }
 
}

// try other algorithms as well like kruskals etc
