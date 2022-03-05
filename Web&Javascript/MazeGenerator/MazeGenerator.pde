int w=20;
int cols,rows;

ArrayList<Cell>grid=new ArrayList<>();

Cell current=new Cell();;
void setup()
{
  
  size(600,600);
  cols=floor(width/w);
  rows=floor(height/w);
  
  frameRate(5);
  
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
  Cell next=current.checkNeighbors();
  
  if(next!=null)
  {
    next.visited=true;
    current=next;
  }
  
}

int index(int i,int j)
{
  if(i<0||j<0||i>cols-1||j>rows-1){
    return 0;
}
return i+j*cols;
}
