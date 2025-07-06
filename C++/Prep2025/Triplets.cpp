// triplets sum to k 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// sort the array
// iterate over the array = pickr current and solve pair sum for remaining part
// o(n^2) + o(nlogn) = o(n^2)

// a = 2,3,4,5,6,7,8,9,15
// target = 18



vector<vector<int>> triplets(vector<int> arr,int sum){

sort(arr.begin(),arr.end());
int n= arr.size();

vector<vector<int>> result;

for(int i=0; i<=n-3;i++){

    int j = i+1;
    int k = n-1;
  
    // find b+c = sum - a[i];

    while( j < k) {

        int current_sum = arr[i];
        current_sum += arr[j];
        current_sum += arr[k];
        if(current_sum == sum){

            result.push_back({arr[i],arr[j],arr[k]});
            j++;
            k--;
        }
        else if(current_sum > sum){
             k--;
        }else{
            j++;
        }
    }

}
return result;
}

int main()
{

    vector<int> a ={1,2,3,4,5,6,7,8,9,15};
    int S = 18;

    auto result = triplets(a,S);

    for(vector<int> eachtriplet : result){
        cout<< eachtriplet[0] << " " << eachtriplet[1] << " " << eachtriplet[2] << endl;
    }

}