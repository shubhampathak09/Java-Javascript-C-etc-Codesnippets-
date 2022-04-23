class LRUCache{
	
	
	
	public:
		
		class node{
			
			
			int key;
			int val;
			node*next;
			node*prev;
			node(int _key,int_val){
				
				key=_key;
				val=_val;
				
			}
			
			
		};
	
	node*head=new node(-1,-1);
	node*tail=new node(-1,-1);
	
	
	
	
	int cap;
	unordered_map<int,node*>m;
	
	
	LRUCache(int capacity){
		cap=capacity;
		head->next=tail;
		tail->prev=head;
		
	}
	
	void addnode(node*newnode){
	node*temp=head->next;
	newnode->next=temp;
	newnode->prev=head;
	head->next=newnode;
	temp->prev=newnode;	
	}
	
	void deletenode(node*delnode){
		
		
		node* delprev=deletenode->prev;
		node*delnext=deletenode->next;
		
		delprev->next=delnext;
		delnext->prev=delprev;
	}
	
	
	
	int get(int key_){
		
		if(m.find(key)!=m.end()){
			
			
			node*resnode=m[key_];
			int res=resnode->val;
			m.erase(key_);
			deletenode(resnode);
			addnode(resnode);
			m[key_]=head->next;
			return res;
		}
		
		return -1;
	}
	
	void put(int key_,int value){
		
		
		if(m.find(key)!=m.end()){
			
			node*exist=m[key_];
			m.earse(key_);
			deletenode(exist);
		}
		
		if(m.size()==cap){
			
			
			m.earse(tail->prev->key);
			deltenode(tail->prev);
			
		}
		
		addnode(new node(key_,value));
		m[key_]=head->next;
		
	}
};
