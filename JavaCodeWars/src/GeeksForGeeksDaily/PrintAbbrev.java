package GeeksForGeeksDaily;

public class PrintAbbrev {



    public static void sol(String str,String asf,int count,int pos){


        if(pos==str.length()){
            if(count==0)
            System.out.println(asf);
            else
                System.out.println(asf+count);

            return;
        }

        if(count>0)
        sol(str,asf+count+str.charAt(pos),0,pos+1);
        else
        sol(str,asf+str.charAt(pos),0,pos+1);
        sol(str,asf,count+1,pos+1);

    }

    public static void main(String[] args){


        sol("pep","",0,0);


    }
}
