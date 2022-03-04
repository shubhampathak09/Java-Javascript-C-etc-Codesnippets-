
// AUTHOR
// shubham pathak
//Cell cell;

ArrayList<Cell>cells=new ArrayList<Cell>();

void setup()
{
  size(700,700);
  cells.add(new Cell());
  cells.add(new Cell());
}

void draw()
{
  background(200);
  
  for(Cell c:cells){
     c.move();
     c.show();
  }
  
   
}

void mousePressed(){

  for(int i=cells.size()-1;i>=0;i--){
  
    Cell c=cells.get(i);
  
     if(c.clicked(mouseX,mouseY))
     {
       cells.add(c.mitosis());
       cells.add(c.mitosis());
       cells.remove(i);
     }
  
  
  }
  

}
