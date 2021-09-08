package ThreadSafeSingleton;

import lambda.Singleton;

public class MyThread implements Runnable {

    @Override
    public void run(){

        Singleton singleton=Singleton.getInstance();

        System.out.println(Thread.currentThread()+" "+singleton.hashCode());
    }


}
