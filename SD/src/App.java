import service.WalletService;

import java.math.BigDecimal;
import java.util.Scanner;

public class App {

    public static void main(String[] args) {

        WalletService walletService = new WalletService();

        Scanner sc = new Scanner(System.in);

        while (true) {

        outer: switch (sc.nextInt()){
             case 1:
                 System.out.println("You selected the create walller");
                 System.out.println("Enter name");
                 String name=sc.next();
                 System.out.println("Enter ammount");
                 BigDecimal amount=sc.nextBigDecimal();
                 walletService.createWallet(name,amount);
                 break;
            case 2:
                System.out.println("you selected tranfer");
                System.out.println("enter sender account number");
                int fromrAcc=sc.nextInt();
                System.out.println("entert reciver account number");
                int toAcc=sc.nextInt();
                System.out.println("Enter the amount to send");
                BigDecimal amount=sc.nextBigDecimal();
                walletService.tranfer(fromrAcc,toAcc,amount);
                break;

            case 3:
                System.out.println("Application Stopped");
                break outer;


         }


        }

    }
}
