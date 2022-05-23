class Trie {
public:
    struct trinode{
    char data;
    int endword;
    struct trinode* child[26]={NULL};
};
    
    //set a gloable root pointer 
    struct trinode *root= new trinode();
    
    Trie() {
        struct trinode *roots= new trinode();
        //initialllization 
        roots->endword=0;
        root= roots;
    }
    
    void insert(string s) {
        //insertion operation 
        struct trinode* ptr= root;
        for(int i =0; i<s.length(); i++){
        int index= s[i]-'a';
        if(ptr->child[index]==NULL){
            struct trinode* temp = new trinode();
            temp->data=s[i];
            (i==s.length()-1)?(temp->endword=1):( temp->endword=0);
            ptr->child[index] =temp;
            ptr= temp;
        }

        else{
            ptr= ptr->child[index];
            if(i==s.length()-1){
                ptr->endword+=1;
            }
        }}
    }
    
    bool search(string h) {
        //search operation 
        struct trinode* temp= root;
        for(int i =0; i<h.size(); i++){
            int index= h[i]-'a';
            if(temp->child[index]!=NULL){
                temp= temp->child[index];
            }
            else{return false;}}
        if(temp->endword>0){ return true;}
        return false;
    }
    
    bool startsWith(string prefix) {
        struct trinode* temp= root;
        for(int i =0; i<prefix.size(); i++){
        int index= prefix[i]-'a';
        if(temp->child[index]!=NULL){
            temp= temp->child[index];
        }
        else{
            return false;
        }
    }
    return true;
    }
};
