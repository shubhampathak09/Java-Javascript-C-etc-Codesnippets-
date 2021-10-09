package IntroScala

object FunctionLiterals extends App {

  val addThreeNum = (x:Int,y:Int,z:Int) => x+y+z

  val sum = (x:Double,y:Double) => {x+y}

  val avg:(Double,Double)=>Double = (x:Double,y:Double) => {sum(x,y)/2}


  def fact(n:Int) :Int ={n match {
    case 0 =>1
    case _ => n*fact(n-1)
  }}


  // synAX

  // TUOLE

//  val fizzbuzz=for(i<- 1 to 20) yield{
//    if(i % 3==0 &&i %5==0) "fizzbuzz"
//    else if (i%3==0) "fizz"
//    else if...
//  }


  val fizzbuzz =for( i<-1 to 20) yield{
    (i%3,i%5) match {
      case (0,0) =>"fizzbuzz"
      case(0,_) => "fizz"
      case(_,0) => "buzz"
      case _ => i.toString
    }
  }

//  println(fizzbuzz)


  def sumOfSquares(n:Int):Int ={n match {
    case 1 =>1
    case _ =>(n*n)+sumOfSquares(n-1)
  }}

  println(sumOfSquares(3))

  println(avg(4,5))

println(fact(4))


  def countDown(n:Int):Unit = n match {
    case 0 =>
    case _ =>println(n)
      countDown(n-1)

  }


  countDown(30)
}
