package stream;

public class ExceptionTest {

    public static void main(String[] args){


        try{
            int x=4/0;

        }catch (Exception e){
            e.printStackTrace();
           // throw e;
        }
        try{
        System.out.println("execution here in case of excemption");
        int x=5/0;
    }
catch (Exception e){
e.printStackTrace();
}

}
}
