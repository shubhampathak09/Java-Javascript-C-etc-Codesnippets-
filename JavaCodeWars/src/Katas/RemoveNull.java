package Katas;

public class RemoveNull {


   public static boolean checkNull(String s){


       if(s.contains("NULL"))
       return true;
       else
       return false;



   }




     public static void main(String[] args){

        String s="id,name,age,score\n1,Jack,NULL,12\n17,Betty,28,11";

        String ss="id,name,age,score\n1,Jenny,NULL,14\n17,Daryll,31,11";


        String[] result=ss.split("\n");


        System.out.println(result.length);

        String res="";

        for(int i=0;i<result.length;i++){
            if(!checkNull(result[i])){
                res+=result[i]+"\n";
            }


        }

        System.out.println(res);
        String check="1,Jack,NULL,12";

        if(checkNull(s)){
            System.out.println("contains nulls");


        }else
        System.out.println("does not contains null");

    }

}
