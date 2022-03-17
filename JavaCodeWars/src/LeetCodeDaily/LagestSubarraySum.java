package LeetCodeDaily;

public class LagestSubarraySum {

    public static void main(String[] args) {




    int[] arr = {2,-1,0};


    if(arr.length==0){

        return ;
    }

    int n = arr.length;


    int cursum = arr[0];
    int ovsum = arr[0];

   for(int i=1;i<n;i++){

    if(cursum>=0){
        cursum+=arr[i];


    }else
    {
        cursum=arr[i];
    }

    if(cursum>ovsum){
        ovsum=cursum;
    }

   }

System.out.println(ovsum);

    }

}
