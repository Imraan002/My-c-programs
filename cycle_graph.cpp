#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> graph[N];
vector<bool> vis(N);
bool dfs(int vertex,int par)
{
	vis[vertex]=1;
    bool res=false;
	for(int child:graph[vertex])
	{
		if(vis[child]==true && child==par)
        {
            continue;
        }
        if(vis[child])
        {
            return true;
        }
        res=res||dfs(child,vertex);
	}
    return res;
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
    bool ans=false;
    for(int i=0;i<vertex;i++)
    {
        if(!vis[i])
        {
            if(dfs(i,-1))
            {
                ans=true;
                break;
            }
        }
    }
    cout<<ans<<"\n";
   
    return 0;
}