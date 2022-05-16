class Solution {
public:
    
    //
    
    int dx[8]={1,1,0,-1,-1,-1,0,1};
    int dy[8]={0,1,1,1,0,-1,-1,-1};
    
    
    
    bool safe(vector<vector<char>>&board,int ci,int cj,int &M,int&N){
      if(ci>=0 && ci< M && cj>=0 && cj <N)
          return true;
        
        return false;
        
    }
    
    bool countMines(vector<vector<char>>&board,int ci,int cj,int &M,int &N){
        
        
        int mines=0;
        
        for(int i=0;i<8;i++){
            
            int ni=ci+dx[i];
            int nj=cj+dy[i];
            
            if(safe(board,ni,nj,M,N)&&board[ni][nj]=='M'){
                mines++;
            }
            
        }
        
        return mines;
    }
    
    
    
    void dfs(vector<vector<char>>&board,int ci,int cj,int &M, int &N){
        
        int getMines=countMines(board,ci,cj,M,N);
        
        if(getMines==0){
            
            board[ci][cj]='B';
            
            for(int i=0;i<8;i++){
                int ni=ci+dx[i];
                int nj=cj+dy[i];
                if(safe(board,ni,nj,M,N)&&board[ni][nj]=='E')
                {
                    dfs(board,ni,nj,M,N);
                }
            }
        }else{
            board[ci][cj]='0' + getMines;
        }
        
    }
    
    
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        
        int ci=click[0];
        int cj=click[1];
        
        int M=board.size();
        int N=board[0].size();
        
        
        if(board[ci][cj]=='M'){
            
           board[ci][cj]='X';
            return board;
            
        }
        
        if(board[ci][cj]=='E'){
            dfs(board,ci,cj,M,N);
        }
        
        return board;
        
    }
};
