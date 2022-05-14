#include<bits/stdc++.h>
using namespace std;

bool ispath(int i,int j, vector<vector<int>>mat,vector<vector<int>>vis){
	
	if(i>=0 && i<mat.size() && j>=0 && j<mat[0].size()&& vis[i][j]==0){
		return true;
	}
	
	vis[i][j]=1;
	
	bool left=ispath(i,j-1,mat,vis);
	if(left)
	return true;
	
	bool right=ispath(i,j+1,mat,vis);
	if(right)
	return true;
	
	bool up=ispath(i-1,j,mat,vis);
	if(up)
	return true;
	
	bool down=ispath(i+1,j,mat,vis);
	if(down)
	return true;
	
	
	//vis[i][j]=0;  // if we need to find all paths
	return false;
	
	
}

int main(){
	
	
}
