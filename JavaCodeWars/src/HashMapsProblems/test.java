package HashMapsProblems;

public class test {

    public static void main(String[] args){

        String s="http://www.example.com/some/path/to/a/file.xml";

        int lastIndex1=s.lastIndexOf('/');
        int lastIndex2=s.lastIndexOf('.');

    //    System.out.println(lastIndex);

        System.out.println(s.substring(lastIndex1+1,lastIndex2));


    }
}
