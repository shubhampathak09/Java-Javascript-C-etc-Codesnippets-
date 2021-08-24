package lambda;

import java.util.concurrent.Callable;

public class helloWorld {

    public static void main(String[] args)
    {
        System.out.println("My Systems starts..");

      //  MyInterImpl myInter=new MyInterImpl();
//
//        MyInter i=new MyInter() {
//            @Override
//            public void sayHello() {
//                System.out.println("this  is first anonymus class");
//            }
//        };
//
//        i.sayHello();
//
//
//        MyInter i2=new MyInter() {
//                    @Override
//                    public  void sayHello(){
//                System.out.println("this is my second anonymus class");
//        }
//    };
//
//        i2.sayHello();
//

        MyInter i=()->{
            System.out.println("this is  first time i am using lamda");
        };

        i.sayHello();

        sumAdd s=(int a,int b)->{
            return a+b;
        };


        System.out.println(s.add(5,3));
        System.out.println(s.add(11,10));



        LengthInter l= (str)->{
            return str.length();
        };


        System.out.println(l.getlength("worldboss"));
   }



}
