#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+7;
const int INF=1e9+10;
vector<int> vis(N,0);
vector<int> dist(N,INF);
vector<pair<int,int>> graph[N];
void dijkstra(int src)
{
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	pq.push({0,src});
	dist[src]=0;
	while(!pq.empty())
	{
		auto node=pq.top();
		pq.pop();
		int n_dist=node.first;
		int n_node=node.second;
		if(vis[n_node]) continue;
		vis[n_node]=1;
		for(auto child:graph[n_node])
		{
			if(child.second+n_dist<dist[child.first])
			{
				dist[child.first]=child.second+n_dist;
				pq.push({dist[child.first],child.first});
			}
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
    for(int i=0;i<edges;i++)
    {
    	int x,y,wt;
    	cin>>x>>y>>wt;
    	graph[x].push_back({y,wt});
    }
    int source=1;
    dijkstra(source);
    for(int i=1;i<=nodes;i++)
    {
    	cout<<dist[i]<<"\n";
    }
    return 0;
}