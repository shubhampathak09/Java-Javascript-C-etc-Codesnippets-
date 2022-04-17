#include <string>
using namespace std;

std::string stringify(Node* list)
{
  // TODO: Implement me
  
  string ans="";
  
  while(list!=nullptr){
    
    ans+=to_string(list->data);
    ans+=" -> ";
    list=list->next;
  }
//  ans+=" -> ";
  ans+="nullptr";
  return ans;
  
  
}
