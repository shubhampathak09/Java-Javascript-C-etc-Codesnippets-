int w=20;
int cols,rows;

ArrayList<Cell>grid=new ArrayList<>();

void setup()
{
  
  size(600,600);
  cols=floor(width/w);
  rows=floor(height/w);
  
  for(int j=0;j<rows;j++)
  {
    for(int i=0;i<cols;i++)
    {
      Cell cell=new Cell(i,j);
      grid.add(cell);
    }
  }
  
}

void draw()
{
 
  background(51);
  for(int i=0;i<grid.size();i++)
  grid.get(i).show();
}
