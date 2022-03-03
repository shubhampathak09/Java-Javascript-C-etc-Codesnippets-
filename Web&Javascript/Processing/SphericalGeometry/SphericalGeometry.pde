void setup()
{
  size(600,600,P3D);
}

void draw()
{
  background(0);
  fill(255);
  lights();
  translate(width/2,height/2);
  sphere(200);
}
