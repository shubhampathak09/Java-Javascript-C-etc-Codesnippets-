package lambda;

public class Singleton {

    public static Singleton instance=null;

    private Singleton(){

    }


    public static  Singleton getInstance()  {

//
//        if(instance==null){
//
//
//
//            try{
//                Thread.sleep(2000);}
//            catch (Exception e)
//            {
//                e.printStackTrace();
//            }
//            instance=new Singleton();
//        }

        if(instance==null) {

           synchronized (Singleton.class){
            if(instance==null){



                try{
                    Thread.sleep(2000);}
                catch (Exception e)
                {
                    e.printStackTrace();
                }
                instance=new Singleton();
            }
           }

        }


        return instance;
    }



}
