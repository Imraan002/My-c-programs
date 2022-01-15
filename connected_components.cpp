#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> graph[N];
vector<int> vis(N);
void dfs(int vertex)
{
	vis[vertex]=1;
	for(int child:graph[vertex])
	{
		if(!vis[child])
		{
			dfs(child);
		}
	}
}
#define ll long long
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int vertex,edges;
    cin>>vertex>>edges;
    for(int i=0;i<edges;i++)
    {
    	int u,v;
    	cin>>u>>v;
    	graph[u].push_back(v);
    	graph[v].push_back(u);
    }
    int cnt(0);
    for(int i=1;i<=vertex;i++)
    {
    	if(!vis[i])
    	{
    		dfs(i);
    		cnt++;
    	}
    }
    cout<<cnt<<"\n";
    return 0;
}