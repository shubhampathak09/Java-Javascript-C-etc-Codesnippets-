//Resturant booking app


public abstract class Users{

    String name;
    String email
    String role;
    

}

public class ResturantClient extends Users{

    
public List<Dish> dishes;
public Table table;
double bill;
Date date;

public boolean calulateBill(){

for(int i=0;i<dishes.length();i++){
    bill+=dishes.get(i).getPrice().getQuantity();

    //
}

public boolean createBooking()

public boolean addDish(Dish dish);

public boolean removeDish(Dish dish);

public boolean payTheBill(double amount,PaaymentType paymentType);

}


public class Table{


int tableId;
TableStatus tableStatus;
private String clientName;
int numberSeats;
TableType tableType;

}

public enum TableStatus{
    BOOKED,VACCANT;
}

public enum TableType{

    SMOKING,NONSMOKING
}





public enum PaymentType{
    UPI,
    CREDIT,
    DEBIT,
    NET_BANKING;
}

public class Dish{


int qunaity;
double price;




}

public abstract class Dishes{


String name;
int quantity;
double taxes;
double price;



}


public final class ChinesDish extends Dishes{

    public  MainCourseDish(string dishName,int price){
        super("chinese_course",20);
    }
    
}

public final class Continental extends Dishes{
    Continetal("",""){
        super();
    }
}

public class Waiter extends user{

}


public class Manager extends user{

    Account account;

public boolean getBookings(Booking b);

public boolean removeBooking(Booking b);

public boolean addBooking(Bookimg b);



}



public class Booking{


int bookingId;
String bookingName;
Table table;
Date currentDate;

 List<Dishes> dishes;





}




}