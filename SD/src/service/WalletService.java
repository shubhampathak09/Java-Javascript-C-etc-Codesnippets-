package service;

import dao.WalletDao;
import entity.Account;

import java.math.BigDecimal;

public class WalletService {

    private static WalletDao dao;

    public WalletService(){
       dao= new WalletDao();
    }


    public void createWallet(String name, BigDecimal amount){
        Account account=new Account(name,amount);
        dao.getAccountMap().put(account.getAccountId(),account);
        System.out.println("Account created for peron "+name+" with account number "+account.getAccountId());
    }


    public void tranfer(int fromAccount,int toAccount,BigDecimal amount){

        if(!valid(fromAccount,toAccount,amount))
            return;


    }

    private static boolean valid(int fromAccount, int toAccount, BigDecimal amount) {

        if(fromAccount==toAccount){
            System.out.println("recived and sender accounts cannot be same");
            return false;}


        if(amount.compareTo(new BigDecimal(0.0001))<0){
            System.out.println("amount to less to send");
            return false;}

        if(!dao.getAccountMap().containsKey(toAccount)==false){
            System.out.println("recivers account does not exisit");
        return false;}



        if(dao.getAccountMap().get(fromAccount).getBalance().compareTo(amount)<0){
            System.out.println("amount to sent is greater the sender accounts balance");
            return false;}


        return true;
    }


    private void statement(int accNum)
    {
        Account account=dao.getAccountMap().get(accNum);

        if(account==null)
        {
            System.out.println("account does not exisit");
            return;
        }

        System.out.println("Summary for account numner"+accNum);
        System.out.println("User Name "+account.getUser().getName());
        System.out.println("Balance "+account.getBalance());
        System.out.println("Transaction Histor "+account.getTransactions());




    }


    private  void overview(){

        for(int x:dao.getAccountMap().keySet()){
            System.out.println("balace for acc num "+x +"->" + dao.getAccountMap().get(x).getBalance());

        }

    }

}
