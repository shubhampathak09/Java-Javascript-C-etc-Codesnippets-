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

    public Account createAccount;


}


class User extends Customer{

    public Account account;
}

class Seller extends User{


  public void addProduct(Product product);


}

class Buyer extends User{

public void placeOrder(Shopping cart);
public void addReview(ProductReview review);



}