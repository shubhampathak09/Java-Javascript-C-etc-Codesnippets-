package IntroScala

object Test extends App {


  def bs(arr:List[Int],low:Int,high:Int,ele:Int): Int ={

    if(low>high) -1

    else {
      val mid: Int = (low) + (high - low) / 2
      arr(mid) match {
        case mx if (mx == ele) => mid
        case mx if (mx > ele) => bs(arr, low, mid - 1, ele)
        case _ => bs(arr, mid + 1, high, ele)
      }
    }
    }

  // scala binary search

  println(bs(List(1,2,3,4),0,3,3))


  }

