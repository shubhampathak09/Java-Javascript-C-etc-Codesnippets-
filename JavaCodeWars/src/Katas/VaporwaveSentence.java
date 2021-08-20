package Katas;

public class VaporwaveSentence {


    public static void main(String[] args)
    {


        String s="I am  eating raw fish today!";

        String res="";

        for(int i=0;i<s.length();i++)
        {
            char x=s.charAt(i);
            if(Character.isWhitespace(x))
                continue;
            x=Character.toUpperCase(x);
            res+=x;
            if(i!=s.length()-1)
                res+=" ";

        }

        System.out.println(res);

    }

}
