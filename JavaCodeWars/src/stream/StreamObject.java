package stream;


import java.util.Arrays;
import java.util.stream.IntStream;
import java.util.stream.Stream;

public class StreamObject {

    //stream api ->collection

    // collection,group of object like array,string etc

    // blank

    public static void main(String[] args) {

        Stream<Object> emptyStream = Stream.empty();

        String[] names = {"Shubham", "Utam", "Tanya", "Ashish", "Ankit"};

        Stream<String> stream1 = Stream.of(names);

        stream1.forEach(x-> System.out.println(x));



        // 3. builder pattern

        Stream<Object> streamBuilder = Stream.builder().build();


        //4.

        IntStream stream =Arrays.stream(new int[]{1,2,3,4});

        stream.forEach(x->{
            System.out.println(x);
        });

        // 5  List,Set, etc  list.stream() call stream on object




    }
}
