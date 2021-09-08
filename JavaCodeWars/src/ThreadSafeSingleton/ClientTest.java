package ThreadSafeSingleton;

import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public class ClientTest {

    // Executor Service

    public static void main(String[] args){

        ExecutorService executorService=null;

        MyThread myThread=new MyThread();
        try{
             executorService= Executors.newFixedThreadPool(1);   // 1 thread then fine does not break otherwise it breaks

            executorService.execute(myThread);
            executorService.execute(myThread);
            executorService.execute(myThread);
            executorService.execute(myThread);

        }catch (Exception e){
            e.printStackTrace();
        }finally {
            if(executorService!=null){
                executorService.shutdown();
            }
        }


        // to fix for muliple thread use static synchorinzed block it will have one lock at clas level and thread need to wait  to access it
    }

}
