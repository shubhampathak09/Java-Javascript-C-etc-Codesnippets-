package entity;

import util.GenrationStrategy;

import java.math.BigDecimal;
import java.util.Set;
import java.util.TreeSet;

public class Account {
    private int accountId;
    private User user;
    private BigDecimal balance;
    Set<Transaction> transactions;


    public Account(int accountId, User user, BigDecimal balance, Set<Transaction> transactions) {
        this.accountId = accountId;
        this.user = user;
        this.balance = balance;
        this.transactions = transactions;
    }

    public Account(String name,BigDecimal amount){
        this.accountId= GenrationStrategy.getNextAccountNumber();
        this.user=new User(name);
        this.balance=amount;
        this.transactions=new TreeSet<>((a,b)->a.getDate().compareTo(b.getDate()));



    }

    public int getAccountId() {
        return accountId;
    }

    public void setAccountId(int accountId) {
        this.accountId = accountId;
    }

    public User getUser() {
        return user;
    }

    public void setUser(User user) {
        this.user = user;
    }

    public BigDecimal getBalance() {
        return balance;
    }

    public void setBalance(BigDecimal balance) {
        this.balance = balance;
    }

    public Set<Transaction> getTransactions() {
        return transactions;
    }

    public void setTransactions(Set<Transaction> transactions) {
        this.transactions = transactions;
    }

    @Override
    public String toString() {
        return "Account{" +
                "accountId=" + accountId +
                ", user=" + user +
                ", balance=" + balance +
                ", transactions=" + transactions +
                '}';
    }
}
