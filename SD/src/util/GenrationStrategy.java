package util;

public class GenrationStrategy {

    public static int accountNumber=1;

    public static int getNextAccountNumber(){
        return accountNumber++;
    }

}
