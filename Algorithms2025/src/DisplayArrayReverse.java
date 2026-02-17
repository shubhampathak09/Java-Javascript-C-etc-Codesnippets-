public class DisplayArrayReverse {

    public static void DisplayArrayReverse(int[] arr , int idx){

        if(idx == -1)
        {
            return;
        }

        System.out.print(arr[idx] +" ");
        DisplayArrayReverse(arr,idx-1);


    }

    public static void main(String[] args){

        int[] arr = {101,200,80,100,75,60};

        int n = arr.length;

        System.out.println("Displaying the elements in Reverse ...");


        DisplayArrayReverse(arr,n-1);



    }

}
