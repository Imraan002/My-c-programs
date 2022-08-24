#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> parent(5,-2);

void find_parent(vector<vector<int>> &graph,int src,int par)
{
	parent[src]=par;

	for(auto child:graph[src])
	{
		if(parent[child]==-2)
		{
			parent[child]=src;
			find_parent(graph,child,src);
		}

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

    vector<vector<int>> graph(nodes);

    for(int i=0;i<edges;i++)
    {
    	int x,y;
    	cin>>x>>y;

    	graph[x].push_back(y);
    	graph[y].push_back(x);
    }

   
 
    find_parent(graph,0,-1);
    cout<<parent[2];
    return 0;

}