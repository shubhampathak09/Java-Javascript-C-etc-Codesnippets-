 class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // first transpose
        
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix[0].size();j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
                
            }
        }
        
        // now swap eac row startom  from first
        
        for(int i=0;i<matrix.size();i++){
            
            
            int s=0;
            int e=matrix[0].size()-1;
            
            while(s<=e){
                
                int temp=matrix[i][s];
                matrix[i][s]=matrix[i][e];
                matrix[i][e]=temp;
                s++;
                e--;
            }
            
        }
        
        
    }
};
