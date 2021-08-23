#include<bits/stdc++.h>
using namespace std;

#define N 8

int dx[8]={2,1,-1,-2,-2,-1,1,2};
int dy[8]={1,2,2,1,-1,-2,-2,-1};

bool isafe(int x,int y,int sol[N][N])
{
	if(x>=0&&x<N&&y>=0&&y<N&&sol[x][y]==-1)
	return true;
	
	return false;
}

int solveKnight(int x,int y,int movei,int sol[N][N])
{
	
	if(movei==N*N)
	return 1;
	
	for(int k=0;k<8;k++)
	{
		int next_x=x+dx[k];
		int next_y=y+dy[k];
		if(isafe(next_x,next_y,sol))
		{
			sol[next_x][next_y]=movei;
			if(solveKnight(next_x,next_y,movei+1,sol))
			return 1;
			else
			sol[next_x][next_y]=-1;
		}
	}
	return 0;
}

int main()
{
	
	
int sol[N][N];



for(int i=0;i<N;i++)
{
	for(int j=0;j<N;j++)
	{
		sol[i][j]=-1;
	}
	}	
	sol[0][0]=0;
	
	// we start from zero
	
	
	solveKnight(0,0,1,sol);
	
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<sol[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
