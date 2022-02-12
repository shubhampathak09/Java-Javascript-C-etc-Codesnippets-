package Katas;

public class ChangeCase {

    public static void main(String[] args){


        String s="helLO";
        String ss="";
        for(int i=0;i<s.length();i++){


            char curr=s.charAt(i);
            if(Character.toLowerCase(curr)==curr){
                ss+=Character.toUpperCase(curr);
            //    System.out.println("ye");
            }else
            {
                ss+=Character.toLowerCase(curr) ;
                //System.out.println("no");
            }

        }


        System.out.println("Original text.."+s);
        System.out.println("After processing.."+ss);

    }

}
