package stream;

import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class StreamEx1 {


    public static void main(String[] args){

        List<Integer> arr= Arrays.asList(2,3,19,0,10,14,78,91);

        List<Integer> arr1=arr.stream()
           .filter(x -> x % 2==0)
           .collect(Collectors.toList());





        System.out.println(arr1);


        List<>

    }



}
