package ImmutableList;

import java.util.ArrayList;
import java.util.Collections;

public class TestCompare implements Comparable<TestCompare> {


    int age;

    int roll;

    int marks;

    String name;

    TestCompare(int age,int roll,int marks,String name){
        this.age=age;
        this.roll=roll;
        this.marks=marks;
        this.name=name;

    }

    public static void  main(String[] args){

        ArrayList<TestCompare>a=new ArrayList<>();

        a.add(new TestCompare(12,11,98,"Kailash"));
        a.add(new TestCompare(20,10,92,"Jane"));

        Collections.sort(a);

        for(TestCompare s:a){
            System.out.println(s.marks +" "+s.name);
        }

    }

    @Override
    public int compareTo(TestCompare o) {
        return this.marks-o.marks;



    }
}



