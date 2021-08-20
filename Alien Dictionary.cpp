#itinclude<bits/stdc++.h>
using namespace std;
 
 
 
#include<bits/stdc++.h>
using namespace std;


vector<int>g[101];
vector<int>in(101);



int main()
{

vector<string>words={"baa","abcd","abca","cab","cad"};


int n=words.size();

set<int>vertex;

for(int i=0;i<n-1;i++)
{
string fw=words[i];
string sw=words[i+1];


for(int j=0;j<min(fw.length(),sw.length());j++)
{
if(fw[j]!=sw[j])
{
int a=fw[j]-'a';
int b=sw[j]-'a';
vertex.insert(a);
vertex.insert(b);

g[a].push_back(b);
in[b]++;
break;
}
}
}

queue<int>q;
int nn=vertex.size();
for(int i=0;i<nn;i++)
{

if(in[i]==0)
{
//cout<<i<<endl;
q.push(i);
}
}
vector<int>res;

while(!q.empty())
{

int fr=q.front();
res.push_back(fr);
q.pop();

for(auto x:g[fr])
{
in[x]=in[x]-1;
if(in[x]==0)
q.push(x);
}
}

for(int i=0;i<res.size();i++)
{
char x='a'+res[i];
cout<<x<<" ";
}
}

// need to check if main or master

//.. changed to master


// test changing the email to see if it works
