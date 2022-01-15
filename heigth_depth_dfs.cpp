#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+10;
vector<int> tree[N];
int depth[N],height[N];
void dfs(int vertex,int par)
{
	for(int child:tree[vertex])
	{
		if(child==par)
			continue;
		depth[child]=depth[vertex]+1;
		dfs(child,vertex);
		height[vertex]=max(height[vertex],height[child]+1);
	}
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
    	int u,v;
    	cin>>u>>v;
    	tree[u].push_back(v);
    	tree[v].push_back(u);
    }
    dfs(1,-1);
    for(int i=1;i<=n;i++)
    {
    	cout<<height[i]<<" ";
    }
    cout<<"\n";
      for(int i=1;i<=n;i++)
    {
    	cout<<depth[i]<<" ";
    }
    return 0;
}