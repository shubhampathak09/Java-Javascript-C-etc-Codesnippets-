package CSES;

public class Repetitions {

    public static void main(String[] args){

        String s="ATTCGGGA";

        int maxl=1;
        int cl=1;
        for(int i=2;i<s.length()-1;i++){

            if(s.charAt(i)==s.charAt(i+1)){

                cl++;
                if(cl>maxl){
                    maxl=cl;
                }else
                {
                    cl=1;
                }
            }

        }

        System.out.println(maxl);

    }

}
