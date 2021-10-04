package stream;

import java.sql.SQLOutput;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class StreamMain1 {


public static void main(String[] args){

    // create a list and filter all even numbers

    List<Integer>list1=List.of(23,44,55,11,22,33,45,1,0,16,100);

   // list1.add(45);

    System.out.println(list1);

   List<Integer>list2=new ArrayList<>();
   list2.add(12);
   list2.add(34);
   list2.add(33);

   //3.

    List<Integer>list3=Arrays.asList(23,44,55,11,22,33,45,1,0,16,100);

    // process list1 and create new list4 add even numbers

    // without stream

    List<Integer>listEven=new ArrayList<>();

    for(Integer i:list1){
        if(i%2==0)
        listEven.add(i);    // boiler plate code
    }

    System.out.println(listEven);


    // with stream

//    Stream<Integer> stream = list1.stream();
//
//    List<Integer> newList = stream.filter(i -> i % 2 == 0).collect(Collectors.toList());
//
//    System.out.println(newList);


    List<Integer> newList = list1.stream().filter(i -> i % 2 == 0).collect(Collectors.toList());

    System.out.println(newList);




    // Ex -2 find all numbers ore than 50


    List<Integer> newlist2 = list1.stream().filter(i -> i > 50).collect(Collectors.toList());

    System.out.println(newlist2);
}
}
