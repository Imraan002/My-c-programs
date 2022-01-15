#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+10;
vector<int> graph[N];
bool vis[N];
void dfs(int vertex)
{
	vis[vertex]=true;
	cout<<vertex<<" ";
	// code to run after entering the vertex
	for(int child:graph[vertex])
	{
		// code to run before entering the child
		if(!vis[child])
		{
			dfs(child);
			//code to run after returning from the child
		}
	}
	//code to run after returning from the vertex
}
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
    dfs(0);
    return 0;
}