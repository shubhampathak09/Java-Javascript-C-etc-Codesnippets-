package lambda;

public class SingletonDemo {

    public static void main(String[] args){


        Singleton singleton1=Singleton.getInstance();

        Singleton singleton2=Singleton.getInstance();


        System.out.println(singleton1.hashCode());

        System.out.println(singleton2.hashCode());

//        System.out.println(Math.abs(singleton1.toString().hashCode())%4);
//
//        System.out.println(Math.abs(singleton2.toString().hashCode())%4);

    }

}
