package LeetCodeDaily;

public class IntToRoman {

    // 1 to 3999




    public static void main(String[] args){

    String M[]={"","M","MM","MMM"};

    String C[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};

    String L[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};

    String X[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};

    int num=1994;

    String th=M[num/1000];

    String hh=C[(num%1000)/100];

    String ten=  L[((num%1000)%100)/10];

    String one= X[num%10];

  //  System.out.println(th);
    //    System.out.println(hh);
      //  System.out.println(ten);
      //  System.out.println(one);

        System.out.println(th+hh+ten+one);



    }

}
