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
	
	
    FILE*fp=fopen("in.txt","r");
    
    if(fp==NULL)
    exit(EXIT_FAILURE);

	char *line=NULL;  
	size_t len=0;
	
    		
	while(getline(&line,&len,fp))!=-1){
		
		assert((int) s.length()==8);
		
		dict.push_back(s.substr(0,8));
		
	//	cout<<dict.size();
		
		if((int)dict.size()<10){
			cout<<dict.back()<<endl;
		}
		
	}
	fclose(fp);
	if(line)
	free(line);

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
















 


	
