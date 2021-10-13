package FuturesDemos

import scala.concurrent.ExecutionContext.Implicits.global
import scala.concurrent.Future

object FutureTest extends App {

  println("This is first")

  val f=Future{
    println("Printing the future")
  }
  Thread.sleep(1)
  println("This is last")

  Thread.sleep(5000)

}
