class Solution {
public:
    
    int findMinMut(string start,string end,set<string>&D){
        
        
        
        if(start==end)
            return -1;
        if(D.find(end)==D.end())
            return -1;
        
        
        char charAr[]={'A','C','G','T'};
        
        
        queue<string>q;
        
        q.push(start);
        
        int lev=0;
        
        while(!q.empty()){
            ++lev;
            
            int n=q.size();
            
            for(int i=0;i<n;i++){
                
                string word=q.front();
                q.pop();
                
                
                for(int i=0;i<word.size();i++){
                    
                    char orig=word[i];
                    
                    for(char c: charAr){
                        
                        word[i]=c;
                        
                        if(end==word){
                            return lev;
                        }
                        
                        if(D.find(word)==D.end())
                            continue;
                        
                        D.erase(word);
                        q.push(word);
                        
                    }
                    word[i]=orig;
                }
                
            }
            
        }
        return -1;
    }
    
    int minMutation(string start, string end, vector<string>& bank) {
       
        
        set<string>D;
        
        for(auto x: bank){
            D.insert(x);
        }
        
        
        int ans=findMinMut(start,end,D);
        
        return ans;
    }
};
