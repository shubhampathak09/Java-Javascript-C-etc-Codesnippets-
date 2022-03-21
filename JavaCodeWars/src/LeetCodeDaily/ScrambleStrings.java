package LeetCodeDaily;

public class ScrambleStrings {


    public static boolean solve(String s1,String s2){

        if(s1.equals(s2))
            return true;

        if(s1.length()<1)
            return false;


        boolean flag=false;


        for(int i=1;i<=s1.length()-1;i++){


            //crap??
            if(solve(s1.substring(0,i),(s2.substring(0,i)))&&solve(s1.substring(i,s1.length()),s2.substring(i,s1.length())) ||
                    solve(s1.substring(0,i),s2.substring(s1.length()-i,s1.length()-i+1)) &&solve(s1.substring(i),s2.substring(0,s1.length()-i+1)))
            {
                flag=true;
            }

        }

        return flag;
    }


    public static void main(String[] args){

        solve("great","reatg");
    }
}
