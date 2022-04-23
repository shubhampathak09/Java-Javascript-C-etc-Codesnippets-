 #include<bits/stdc++.h>
 using namespace std;
 
 
 int maxArea(vector<int>& height) {
        
        
        int l=0;
        int r=height.size()-1;
        
        int mx=0;
        while(l<=r){
            
            
          int minh=min(height[l],height[r]);      
          mx=max(mx,minh*(r-l));  
          
          if(height[l]<height[r]){
              l++;
          }  else
              r--;
            
        }
        
        return mx;
    }
    
    
    int main(){
    	
    	// test code here
    	
	}
