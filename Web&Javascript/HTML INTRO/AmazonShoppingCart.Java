// Amazon Shopping Website

// Requirements

//1. Users Should be able to add new Products to se;;
//2 User should be available to searhc Products by name and Category
//3.Usser can search and view all products but they will have to become registered to buy products
// add/reove/modify their invenrory
//checkout and buy
//can add rating and review to products
//users should get notification whe there is change in shipping status  -> Notification  
//users should be able to track shipment and current state of order




class Customer{

ShoppingCart cart;
Search search;
int customerId;

public ShopingCart getShoppingCart(customerId);
public void addItemsToShoppingCar(Item item);
public void updateItemFromShoppingCart(Item item);
public void removeItemFromShoppingCart(Item item);



}

class Guest extends Customer{

    public Account createAccount();


}


class User extends Customer{

    public Account account;
}

class Seller extends User{


  public void addProduct(Product product);


}

class Buyer extends User{

Order orderobj; // ? this will enable to place orders    
public OrderStatus placeOrder(ShoppingCart cart);
public void addReview(ProductReview review);



}

public class Account{

String name;
String email;
String phone;
String userName;
String password;


List<Address> shippingAddress;
AccountStatus accountStatus;


}


public class Address{
    int pinCode;
    String street;
    String city;
    String state;
    String country;
}

public enum AccountStatus{
    ACTIVE,
    BLOCKED,
    INACTIVE
}

public class ShoppingCart{

    List<Items>;
    double cartValue;

    //apis  add update delete get all items
    // get cart value;
   
    public void addItem(Item item);
    public void updateItem(Item item);
    public void deleteItem(Item item);
    public void checkOutItems(); // payemt
    public List<Items>getItems();
    public double getCartValue();
}

class Item{
    int quantity;
    Poduct product;
}

class Product{

    int productId;
    String productDescription;
    String name;
    ProductCategory ProductCategory;
    Seller seller;
    double cost;
    
    List<ProductReview>ProductReviews;

}

public enum ProductCategory{
    ELECTRONICS,GROCERY,EDUCATION,MOBILE
}

public class ProductReview{

    String details;
    Buyer reviewer;
    int ratings;

}

public class Search{
    public List<Product> searchByName(String name);
     public List<Prodduct> searchByCategory(ProductCategory ProductCategory);


}

class Order{


int orderId;
List<Items> orderItems;
double orderValue;
Buyer buyer;
Date orderDate;
NotificationService notificationService;

List<OrderLog> orderLog;
// apis

public OrderStatus placeOrder();
public OrderStatus trackOrder();
public void addOrderLogs();
public  PaymentStatus makePayement(PaymenType paymentType);





}

public enum OrderStatus{
PACKED,SHIPPED,ENROUTE,OUT_FOR_DELIVERY,DELIVERED,CANCELLED
}

public enum PaymentStatus{
SUCESS,ERROR,CANCELLED,REFUND_INITIATED,REFUNDED
}

public enum PaymenType{
CREDIT_CARD,UPI,CASH,NET_BANKING
}

class OrderLog{
    String orderDetails;
    Date createdDate;
    OrderStatus status;
}

class NotificationService{

public boolean sendNotification(NotificationDomain notificationDomain){


Notification notficationObject;
MessageAttribute messageAttribute;

switch(notificationDomain.getNotificationType()){

case NotificationType.EMAIL:
     notficationObject=new EmailNotiication();
     messageAttribute=new MessageAttribute("abc@abc.com",notificationDomain.getUser().getAccount().getEmail(),"message default"); 
     break;


     case NotificationType.WHATSAPP:
     notficationObject=new EmailNotiication();
     messageAttribute=new MessageAttribute("123445678",notificationDomain.getWhatsApp()); 
     break;
     
     
    default:
    notficationObject=new EmailNotiication();
    messageAttribute=new MessageAttribute("912345678",notificationDomain.getSMS()); 
    break;
}
    return notficationObject.sendNotification(messageAttribute);
 //  return messageAttribute;

}

class NotificationDomain{

  NotificationType notificationType;
  string notificationId;
  User user;

}

class MessageAttributes{
     String tp;
     String from;
     String message;
}

public interface Notification{


boolean sendNotification(MessageAttribute messageAttribute);

}
class EmailNotification implements Notification{
    boolean sendNotification(MessageAttribute MessageAttribute);
}

class WhatsAppNotification implements Notification{
    boolean sendNotification(MessageAttribute MessageAttribute);
}

class SMSNotification implements Notification{
    boolean sendNotification(MessageAttribute MessageAttribute);
}
}

