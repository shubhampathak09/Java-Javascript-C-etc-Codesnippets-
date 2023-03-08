float[][] field;
int res=10;
int cols,rows;

void setup() {
  size(600,400);
  cols=width/res;
  rows=height/res;
  field=new float[cols][rows];
  for(int i= 0;i< cols; i++){
    for(int j=0; j<rows; j++){
      field[i][j] = random(1);
    }
  }
}

void draw(){
  background(0);
  for(int i=0;i< cols; i++)
  {
    for(int j=0 ;j < rows ;j++){
    stroke(field[i][j] *255);
    strokeWeight(res * 0.4);
    point(i*res,j*res);
    }
  }
}
