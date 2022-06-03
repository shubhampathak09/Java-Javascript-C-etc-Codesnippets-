package entity;

import java.math.BigDecimal;
import java.util.Date;

public class Transaction {

    private int form;
    private int to;
    private BigDecimal amount;

    private Date date;

    public int getForm() {
        return form;
    }

    public void setForm(int form) {
        this.form = form;
    }

    public int getTo() {
        return to;
    }

    public void setTo(int to) {
        this.to = to;
    }

    public BigDecimal getAmount() {
        return amount;
    }

    public void setAmount(BigDecimal amount) {
        this.amount = amount;
    }

    public Date getDate() {
        return date;
    }

    public void setDate(Date date) {
        this.date = date;
    }

    @Override
    public String toString() {
        return "Transaction{" +
                "form=" + form +
                ", to=" + to +
                ", amount=" + amount +
                ", date=" + date +
                '}';
    }

    public Transaction(int form, int to, BigDecimal amount, Date date) {
        this.form = form;
        this.to = to;
        this.amount = amount;
        this.date = date;
    }
}
