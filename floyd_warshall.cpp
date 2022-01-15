#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=500;
const int INF=1e9+7;
int dist[N][N];
void reset()
{
	for(int i=0;i<N;i++)
    {
    	for(int j=0;j<N;j++)
    	{
    		if(i==j)
    		{
    			dist[i][j]=0;
    		}
   			else{
   				dist[i][j]=INF;
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
    reset();
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++)
    {
    	int x,y,wt;
    	cin>>x>>y>>wt;
    	dist[x][y]=wt;
    }
    
    for(int k=1;k<=nodes;k++)
    {
    	for(int i=1;i<=nodes;i++)
    	{
    		for(int j=1;j<=nodes;j++)
    		{
    			if(dist[i][k]!=INF && dist[k][j]!=INF)
    				dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
    		}
    	}
    }
    for(int i=1;i<=nodes;i++)
    {
    	for(int j=1;j<=nodes;j++)
    	{									//floyd warshall algorithm
    		if(dist[i][j]==INF)
    			cout<<"I ";
    		else
    			cout<<dist[i][j]<<" ";
    	}
    	cout<<"\n";
    }
    return 0;
}