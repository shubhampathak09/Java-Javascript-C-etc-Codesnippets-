package stream;

import java.util.List;
import java.util.stream.Collectors;

public class Methods {


    public static void main(String[] args) {


        // filter(predicate)
        // boolean value function
        // e->{

    // }

        List<String> names=List.of("Aman",
                "Ankit",
                "Avinahs",
                "Amit",
                "Shubham");


        List<String> newNames = names.stream().filter(x -> x.startsWith("A")).collect(Collectors.toList());


        System.out.println(newNames);;
        // map(Function)
        /*

        each element perform some operation




         */


        List<Integer>numbers=List.of(23,4,2,5,7,4);


//        numbers.stream().map(i->i*i).forEach(i->{
//            System.out.println(i);
//        });


        List<Integer> newList1 = numbers.stream().map(i -> i * i).collect(Collectors.toList());

        System.out.println(newList1);

        numbers.stream().sorted().forEach(System.out::println);

       int x=numbers.stream().min((xx,yy)->xx.compareTo(yy)).get();    }



}
