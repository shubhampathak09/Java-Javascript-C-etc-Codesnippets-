package lambda;

import java.text.SimpleDateFormat;
import java.util.Date;

public class DateForm {


    public static void main(String[] args)
    {

        Date date=new Date();


        SimpleDateFormat formater=new SimpleDateFormat("MM/dd/yyyy");

        String strDate=formater.format(date);

        System.out.println(strDate);

       try {
           Date date1 = formater.parse("08/31/2021");
           System.out.println(date1);
       }catch (Exception e)
       {
           e.printStackTrace();
       }
    }




}
