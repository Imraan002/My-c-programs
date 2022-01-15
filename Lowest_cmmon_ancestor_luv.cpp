#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+9;
vector<int> Tree[N];
int parent[N];
void dfs(int vertex,int par=-1)
{
	parent[vertex]=par;
	for(int child:Tree[vertex])
	{
		if(child==par)continue;

		dfs(child,vertex);
	}
}
vector<int> find_path(int node)
{
	vector<int> ans;
	while(node!=-1)
	{
		ans.push_back(node);
		node=parent[node];
	}
    reverse(ans.begin(),ans.end());
	return ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int vertices,edges;
    cin>>vertices>>edges;
    for(int i=0;i<edges;i++)
    {
    	int u,v;
    	cin>>u>>v;
    	Tree[u].push_back(v);
    	Tree[v].push_back(u);
    }
    dfs(1);
    int node1=2;
    int node2=3;
    vector<int> path1=find_path(node1);
    vector<int> path2=find_path(node2);
    int lca=-1;
    for(int i=0;i<min(path1.size(),path2.size());i++)
    {
    	if(path1[i]==path2[i])
        {
    		lca=path1[i];
        }
    	else
        {
    		break;
        }
    }
    cout<<lca<<"\n";
    
    return 0;
}