package GeneralProblems;

public class WaveArray {

static void sortInWave(int arr[]){

    int n = arr.length;

    for(int i = 0 ; i<n-1 ;i+=2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

public static void main(String [] args){
    int arr[] = {1,2,3,4,5};

    sortInWave(arr);

    for(int i : arr){
        System.out.print(i + " ");
    }

}

}
