

// 4 sum
#include<bits/stdc++.h>
using namespace std;


int main()
{
	
	map<int,pair<int,int>>mp;
	
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			
			mp[arr[i]+arr[j]]={i,j};
			
		}
	}  //o(n^2)
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			
			int sum=arr[i]+arr[j];
			
			
			if(mp.find(X-sum)!=mp.end()){
				
				
				pair<int,int>=mp[X-sum];
				
				if(p.first!=i&&p.first!=j&&p.second!=i&&p.second!=j){
					
					cout<<arr[i]<<","<<arr[j]<<","<<arr[p.first]<<" ,"<<arr[p.second];
					
		            return; 
				}
				
			}
			
		}
	}
	
	


}



Input :          1
               /   \
              2     3
            /  \  /  \
           4   5  6   7

Output :        11
              /    \           
             9      13            
            / \    /  \
           2   3   4   3
                  
                  
     inorderArr[]->2 9 3 11 4 13 3
	 
	 map<node*,pair<int,int>> 
	 
	 int n=sizeof(arr/sizeof(arr[0]));
	 
	 	 
	 for(int i=0;i<n;i++){
	 	
	 if(i==0){
	 	
	 	map[i]={0,inorderArr[i+1]};
	 	
	 }else if(i==n-1){
	 	
	 	map[i]={inorderArr[i-1],0};
	 }else
	 {
	 	map[i]={inorderArr[i-1],inorderArr[i+1]};
	 	
		 }	
	 
	 
	 
	 	
	 }
	               
                  
                  
             
			 int inorderPred(struct node*root){
			 	
			 	
			 	if(root==NULL)
			 	return 0;
			 	
			 	
			 	
			 	
			 }
			      
                  
            void replaceNodes(struct node*root){
            	
            	
             
            	
			}      




















q.push(root);

map<int,int>mp;

int level=0;

while(!q.empty()){
	
int n=q.size();

mp[level++]=n;

for(int i=1;i<=n;i++){
	
	node fr=q.front();
	
	if(node->left)q.push(node->left);
	
	if(node->right)q.push(node->right);
	
}

}


