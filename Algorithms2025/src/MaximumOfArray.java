public class MaximumOfArray {


     static int maxArray (int[] arr, int s){


        if(s == arr.length-1){
            return arr[s];
        }

        int current = arr[s];
        int nextMax = maxArray(arr,s+1);


        return Math.max(current,nextMax);

    }

    public static void main(String[] args){

        int arr[] ={12,13,67,0,9,210,456,-1,700,65,34,27,8};

        int n = arr.length;

        System.out.println("Printing thr maximum in array..");

        System.out.println(maxArray(arr,0));
    }



}
