package IntroScala

object IterativeBs {

  def main(args: Array[String]) {

    var a: List[Int] = List(24, 67, 89, 101, 110, 163)

    var low: Int = 0;

    var high: Int = a.length - 1;


    while (low <= high) {


      var mid: Int = low + (high - low) / 2
      a(mid) match{
        case mx if(mx==67) => println(mid)
        case mx if(mx>67) =>high=mid-1
        case mx if(mx<67) => low=mid+1
      }
    }

  //  if(low>high) -1



    // bit advnaced right go to basics

    
  }
}
