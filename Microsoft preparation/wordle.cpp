#include<bits/stdc++.h>
using namespace std;;

//problem link

//https://www.nytimes.com/games/wordle/index.html

// optimise the number of guesses

// grab dictionary

// matach dome characters and see what is the feedback


// wordle

vector<string>dict;

void read(){
	
//	
//    FILE*fp=fopen("in.txt","r");
//    
//    if(fp==NULL)
//    exit(EXIT_FAILURE);
//
//	char *line=NULL;  
//	size_t len=0;
	
    
	ifstream inFile;
	
	inFile.open("C://Users//91954//Documents//Codes For Javascript Java and C++//Microsoft preparation//in.txt",ios::in);
	
	if(inFile.fail()){
		cerr<<"Error opening file"<<endl;
		inFile.close();
		exit(1);
	}
	
	string line;
			
	while(getline(inFile,line)){
		
		assert((int) line.length()==8);
		
		dict.push_back(line.substr(0,8));
		
	//	cout<<dict.size();
		
		if((int)dict.size()<10){
			cout<<dict.back()<<endl;
		}
		
	}
	inFile.close();

}


struct Info{
	
	int a[5];
	
};

int match(char a,char b){
	
}

Info match(string a,string b){
	
	Info info;
	
	
	for(int i=0;i<5;i++){
		
		info.a[i]=match(a[i],b[i]);
		
	}
	
	
	return info;
}

int main(){
	

//int n=VALID_GUESSES.size();

//cout<<n;	
	
	read();
}
















 


	
