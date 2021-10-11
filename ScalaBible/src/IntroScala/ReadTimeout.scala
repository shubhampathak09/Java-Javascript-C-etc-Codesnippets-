package IntroScala

import scala.io.StdIn.readInt

object ReadTimeout extends App {


  // there is a race condition -> cam put some sync on
  var answered=false;
  val countThread=new Thread{

    override def run: Unit = {
      var i=10;
      while(!answered&&i>0) {
        println(i)
        Thread.sleep(1000)
        i=i-1;
      }
      if(!answered)
      println("Times up")
      sys.exit(0)
    }
  }

  println("Enter Your age:-")
  countThread.start()
  val age=readInt
  answered=true;
  if(age<18)
    println("sorry you can enter..")
  else {
    println("wellcome")

  }

  // heavy handed way of terminatinf the program
  sys.exit(0)

  // low level java threads


  // Future and After Paallel Collections thyey are less error prone


}
