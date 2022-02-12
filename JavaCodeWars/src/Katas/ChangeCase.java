package Katas;

public class ChangeCase {

    public static void main(String[] args){


        String s="hello";
        String ss="";
        for(int i=0;i<s.length();i++){


            char curr=s.charAt(i);
            if(Character.toLowerCase(curr)==curr){
                System.out.println("ye");
            }else
            {
                System.out.println("no");
            }

        }


    }

}
