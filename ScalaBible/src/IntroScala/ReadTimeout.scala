package IntroScala

import scala.io.StdIn.readInt

object ReadTimeout extends App {

  val countThread=new Thread{
    override def run: Unit = {
      for (i <- 10 to 1 by -1) {
        println(i)
        Thread.sleep(1000)
      }
      println("Times up")
      sys.exit(0)
    }
  }

  println("Enter Your age:-")
  countThread.start()
  val age=readInt
  if(age<18)
    println("sorry you can enter..")
  else {
    println("wellcome")

  }
  sys.exit(0)
}
