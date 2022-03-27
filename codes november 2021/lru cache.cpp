// erase  ->start
//beigin  end  
// pop_back()  ->elemts
//push  ->elements



#include<bits/stdc++.h>
using namespace std;


class LRUCache{
	
	
	list<int>dq;
	
	
	map<int,list<int>::iterator>map;
	
	int csize;
	
	
	public:
		LRUCache(int n){
			
			csize=n;
		}
	    void refer(int x){
	    	
	    	
	    	if(map.find(x)==map.end()){
	    		
	    		if(dq.size()==csize){
	    			
	    			int last=dq.back();
	    			dq.pop_back();
	    			map.erase(last);
	    			
	    			
	    			dq.push_front(x);
	    			map[x]=dq.begin();
	    			
				}else
				{
					dq.push_front(x);
					map[x]=dq.begin();
					
					
					
				}
	    		
	    		
			}
	    	else  // element found in map
	    	{
	    		
	    		if(dq.size()==csize){
	    			
	    			
	    			dq.erase(map[x]);   //reference
	    			dq.push_front(x);
	    			map[x]=dq.begin();
	    			
				}
	    		else
	    		{
	    			dq.push_front(x);
	    			map[x]=dq.begin();
				}
			}
	    	
		}
		
		void display(){
			
			
			for(auto x:dq){
				
				cout<<x<<" ";
			}
			
		}
	
};

int main()
{
	
	LRUCache l(4);
	
	
	l.refer(1);
	l.refer(2);
	l.refer(3);
	l.refer(1);
	
	l.refer(4);
	l.refer(5);
	
	
	l.display();
	
	
}
