#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+10;
vector<int> tree[N];
int depth[N];
void dfs(int vertex,int par=-1)
{
	for(auto child:tree[vertex])
	{
		if(child==par)continue;
		depth[child]=depth[vertex]+1;
		dfs(child,vertex);
	}
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++)
    {
    	int u,v;
    	cin>>u>>v;
    	tree[u].push_back(v);
    	tree[v].push_back(u);
    }
    dfs(1);
    int maxnode=INT_MIN;
    int maxdepth=INT_MIN;
   	for(int i=1;i<=nodes;i++)
   	{
   		if(depth[i]>maxdepth)
   		{
   			maxnode=i;
   			maxdepth=depth[i];
   		}
   	}
   for(int i=1;i<=nodes;i++)
   {
   		depth[i]=0;
   }
   maxdepth=INT_MIN;
    dfs(maxnode);
    int ans(INT_MIN);
 	for(int i=1;i<=nodes;i++)
   	{
   		if(depth[i]>maxdepth)
   		{
   			maxdepth=depth[i];
   		}
   	}
    cout<<maxdepth;

    return 0;
}