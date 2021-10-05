package IntroScala

class Point(val xc:Int,val yc:Int) {


  var x:Int=xc
  var y:Int=yc

  def move(dx:Int,dy:Int): Unit ={
    x=x+dx;
    y=y+dy;
    println("Point x newloc.."+x);
    println("Point y newloc.."+y);
  }
 }

object Demo extends App{


  val pt=new Point(10,20);

  println("Point x curloc.."+pt.x);
  println("Poiy y xurrloc.."+pt.y);


  pt.move(10,10);

}
