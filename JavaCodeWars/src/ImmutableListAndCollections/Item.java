package ImmutableListAndCollections;

import java.util.ArrayList;

public class Item {


    int weight;

    int price;

    int length;


    Item(int weight,int price,int length)
    {
        this.weight=weight;
        this.price=price;
        this.length=length;

    }

    int getWeight(){
        return this.weight;

    }
    int getPrice()
    {
        return  this.price;
    }
    int getLength(){
        return this.length;
    }

    void setWeight(int weight){
        this.weight=weight;
    }


    void setLength(int length){
        this.length=length;
    }

    void setPrice(){
        this.price=price;
    }

   public  int sortPriceComparator(Item a){

        return this.price-a.price;   // priorit queue if this.price <0  then highest prioritty
    }

    public int sortPriceWeight(Item a){

        //1 price // 2 weight

        if(this.price<a.price)
        {
           return this.price-a.price;
        }
        else
        {
            return this.weight-a.weight;
        }

    }

    public static void main(String[] args){

        ArrayList<Item>items=new ArrayList<>();

        items.add(new Item(3,30,2));
        items.add(new Item(4,20,1));
        items.add(new Item(6,7,4));
        items.add(new Item(9,50,2));
        items.add(new Item(2,22,3));

        items.sort(Item::sortPriceComparator);

        for(Item it:items)
        System.out.println(it.weight+" "+it.price+" "+it.length);

        items.sort(Item::sortPriceWeight);

        System.out.println("next line");

        for(Item it:items)
            System.out.println(it.weight+" "+it.price+" "+it.length);

    }

}
