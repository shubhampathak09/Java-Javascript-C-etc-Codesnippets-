package IntroScala

object Iter extends App{

   var nums=List(4,7,2,3)

  for(n <-nums)println(n)

  nums.foreach{i:Int=>println(i)}  // lamda expression
  // lambda expression

  // more examples

  val square= (x:Double)=> x*x

  val addThreeNum = (x:Int,y:Int,z:Int) => x+y+z
 // def square(x:Double):Double=x*x

  println(square(23))

  println(addThreeNum(3,4,5))

 // val sq2: Double => Double = x => x*x

  val twice: Double =>Double =_*2

  println(twice(4))
}
