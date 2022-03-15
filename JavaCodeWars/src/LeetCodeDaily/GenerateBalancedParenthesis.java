package LeetCodeDaily;

import java.util.ArrayList;
import java.util.List;

public class GenerateBalancedParenthesis {





        List<String> result=new ArrayList<String>();

        public void generate(int open,int close,String s){

            if(open==0&&close==0){


                result.add(s);
                return;
            }
            if(open!=0)
                generate(open-1,close,s+"(");

            if(open<close)
                generate(open,close-1,s+")");


        }

        public List<String> generateParenthesis(int n) {


            int open=n;
            int close=n;

            String s="";

            generate(open,close,s);


            return result;
        }

       public static  void main(String[] args){

            GenerateBalancedParenthesis g=new GenerateBalancedParenthesis();

            List<String>ans=g.generateParenthesis(3);


            for(String s:ans){
                System.out.println(s);
            }

       }
}
