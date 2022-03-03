

// 1-> 2-> null<-2<- 1 n
       f         s   
                 
   1-> 2-> 2-> 3 null<-3<- 2<- 2<- 1              
   f   f   f   f        s     s      s   s
   
   1->2 2 3<- 2<- 2<- 1
          s 
          
bool check(..){
          
while(F!=NULL&&SLOW!=NULL){
	
	if(f->data!=s->data){
		return false
	}
	f=f.next;
	s=s.next;
}

reurn true;


}
//1 2 3 2 1
