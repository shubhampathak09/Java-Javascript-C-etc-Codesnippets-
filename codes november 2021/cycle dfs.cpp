 #include <bits/stdc++.h>
#define endl "\n"
using namespace std;
#define int long long int
 
 
int n, m;
int sv, ev;
vector<vector<int>> g;
vector<int> vis;
vector<int> parent;
 
 
bool dfs(int u, int p)
{
	vis[u] = true;  // basic depth first search
	parent[u] = p;   // store the parent
	for(auto v: g[u])    // this is process the vertex
	{
		if(v == p) continue;    // of [arent conitinue
		if(vis[v])               // if vis and not parent then cycle core logic 
		{
			sv = v;             // store the endpoint to print cycle later
			ev = u; 
			return true;
		} 
		if(!vis[v])                // if not visited do dfs 
			if(dfs(v,u)) 
				return true;
	}
	return false;           // no cycle found
}
 
 
bool visit_all()
{
	for(int i = 1; i <= n; ++i)
	{
		if(!vis[i])
			if(dfs(i,-1)) return true;                   // return true
	}
	return false;                    
}
 // int32 vs int main
 
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	g.resize(n+1);  // resize function
	vis.resize(n+1);  // resize function
	parent.resize(n+1);
	for(int i =0 ; i < m; ++i)
	{
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
 
	if(!visit_all())
	{
		cout << "IMPOSSIBLE" << endl;
		return 0;
	}
 
 
   for(int i=1;i<=n;i++)
   cout<<parent[i]<<" ";
   
	int tv = ev;
	vector<int> ans;
	ans.push_back(ev);
	
	while(tv != sv)
	{
		ans.push_back(parent[tv]);
		tv = parent[tv];
	}
	ans.push_back(ev);
	cout << ans.size() << endl;
	for(auto c: ans)
	{
		cout << c << " ";
	}
 
}
