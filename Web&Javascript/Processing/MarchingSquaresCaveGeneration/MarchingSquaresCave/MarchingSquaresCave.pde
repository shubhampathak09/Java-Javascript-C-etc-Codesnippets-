int[][] field;
int res=10;
int cols,rows;

void setup() {
  size(600,400);
  cols=1+width/res;
  rows=1+height/res;
  field=new int[cols][rows];
  for(int i= 0; i<cols; i++){
    for(int j=0; j<rows; j++){
      field[i][j] = floor(random(2));
    }
  }
}

void draw(){
  background(127);
  for(int i=0;i< cols-1; i++)
  {
    for(int j=0 ;j < rows-1 ;j++){
    stroke(field[i][j] *255);
    strokeWeight(res * 0.4);
    point(i*res,j*res);
    }
  }
  
   for(int i=0;i< cols-1; i++)
  {
    for(int j=0 ;j < rows-1 ;j++){
    float x = i *res;
    float y = j * res;
    PVector a = new PVector(x + res * 0.5,y);
    PVector b= new PVector(x + res ,y +res * 0.5);
    //PVector c= new PVector(x + res * 0.5, y + res);
    //PVector d= new PVector(x , y + res * 0.5);
    stroke(255);
    strokeWeight(1);
    line ( a. x,a.y,b.x,b.y);
      
    }
  }
}
