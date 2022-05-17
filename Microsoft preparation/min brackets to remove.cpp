
/*
MIN REMOVE TO MAKE BALANCED 


stack<int> ms;

for(int i=0;i<s.length;i++){
	
	char ch=s[i];
	
	if(ch=='(')
	{
		 ms.push(ch);
	}else if( ch ==')'){
		if(!ms.empty()){
			ms.pop();
		}else
		{
			s[i]='?';
		}
	}
	
	
	while(!ms.empty()){
		s[ms.top()]='?';
		ms.pop();
	}
	
	
	// remove space from string
	
	s.earse(remove(s.begin(),s.end(),'?'),s.end());
	
}
*/


#
