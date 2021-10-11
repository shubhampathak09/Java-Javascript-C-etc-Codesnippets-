package IntroScala

object WaitCounting extends App {

  // Wait ->just cauise some thread to stop running till indefinite period of time

  val numThreads=3

  val threads=Array.tabulate(numThreads){
    i => new Thread{
      override def run:Unit={
        println("Start"+i)
        for(j<-1 to 5){
          WaitCounting.wait()
          println(i+" : "+j)
          WaitCounting.notify()
        }
      }
    }
  }

  threads.foreach(_.start())
  Thread.sleep(1000)
  println("Notify first")
  notify()
}
