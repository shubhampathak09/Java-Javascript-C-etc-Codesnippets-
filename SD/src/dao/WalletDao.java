package dao;

import entity.Account;

import java.util.HashMap;
import java.util.Map;

public class WalletDao {

    private Map<Integer, Account> accountMap;

    public WalletDao(){
        accountMap=new HashMap<>();
    }

    public Map<Integer, Account> getAccountMap() {
        return accountMap;
    }

    public void setAccountMap(Map<Integer, Account> accountMap) {
        this.accountMap = accountMap;
    }
}
