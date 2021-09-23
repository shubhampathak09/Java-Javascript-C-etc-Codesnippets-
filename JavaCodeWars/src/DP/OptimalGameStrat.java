package DP;

public class OptimalGameStrat {


    public static int solve(int arr[],int i,int j){


        if(i==j)
        {
          return arr[i];
        }

        if(i+1==j){
            return Math.max(arr[i],arr[j]);
        }

        int choice1=arr[i]+Math.min(solve(arr,i+2,j),solve(arr,i+1,j-1));
        int choice2=arr[j]+Math.min(solve(arr,i+1,j-1),solve(arr,i,j-2));

        return Math.max(choice1,choice2);
    }

    public static void main(String[] args){



int[] arr={20,30,2,2,2,10};


int ans=solve(arr,0,arr.length-1);

System.out.println(ans);

    }

}
