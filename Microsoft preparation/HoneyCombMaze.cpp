/*
Reference : How can we find all simple cycles in an undirected graph efficiently? How do I find the points that are forming a cycle in a graph?

Giving it a second thought, I can say that there’s no alternative solution which is possible which can give the answer in polynomial time. Infact, if the polynomial time complexity solution existed, the Hamiltonian cycle problem could be solved in polynomial time as well which is indeed an NP-Hard problem as of now.

Take a look at this AC code to know how to apply dfs to this problem.
*/

/*
ALCATRAZ3 - THE HONEYCOMB MAZE
#graph-theory #graph #bfs #dfs
You won the lottery tickets to visit the famous Disneyland HongKong with the Taarak Mehta ka Ulta Chasma family and Subramaniam Iyer gets stuck in the Honey Comb maze. He has a Phone along with him and no one else to help him out. He calls you and asks for help. Chuck the story getting into the problem now , There are N x M blocks of Honey combs in the maze and you are given a starting point. your task is to help Mr. Iyer find out whether or not he can traverse the maze and return to his original position. The constraint being that a honey comb ( Block ) once visited cannot be visited again . Also , he has to make a minimum of 'k' number of moves before returning to the starting point .  The '.' represent the emty blocks whereas the '*' represent the blocks that can't be visited . from a block (x,y) Iyer can move only to blocks (x-1,y)  ,  (x+1,y)  ,  (x,y+1)  ,  (x,y-1) . Help Mr. Iyer return to his original position. 
*/


#include<bits/stdc++.h>
using namespace std;


char maze[102][102];
bool vis[102][102];

int k,s_x,s_y;
int n,m;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

bool dfs(int x,int y,int steps){
	
	if(vis[x][y]){
		
      if(s_x==x && s_y==y && steps>=k){
      	return 1;
	  }		
		
      return 0; 		
		
	}
	
	
	vis[x][y]=1;
	
	
	for(int i=0;i<4;i++){
		
		int _x=x+dx[i];
		int _y=y+dy[i];
		
		if(_x>0 && _x <=n && _y>0 && _y<=m && maze[x][y]=='.')
		{
			
			bool ans=dfs(_x,_y,steps+1);
			if(ans==true)
			return 1;
					}
	}
	vis[x][y]=0;
	return 0;
	
}


int main(){
	
	cin>>n;
	cin>>m;
	
	cin>>k;
	
	cin>>s_x>>s_y;
	
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			
			cin>>maze[i][j];
		}
	}
	
	
	bool ans=dfs(s_x,s_y,0);
	
	
	if(ans)
	{
		cout<<"Yes";
	}else
	{
		cout<<"No";
	}
}
/*
5 5
14
1 2
. . . * *
* . . . *
* . . . .
. * . . .
. * . . *
Yes
*/


