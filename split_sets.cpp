#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool check_bipartite(vector<vector<int>> &adj,int src,vector<int> &colour)
{
    colour[src]=0;
    queue<int> qu;
    qu.push(src);
    while(!qu.empty())
    {
        int x = qu.front();
        qu.pop();
        for(auto neighbour:adj[x])
        {
            if(colour[neighbour]!=-1)
            {
                if(colour[neighbour]==colour[x])return false;
            }else{
                colour[neighbour]=!colour[x];
                qu.push(neighbour);
            }
        }


    }
    return true;
}
bool is_bipartitite(vector<vector<int>> &adj,int V)
{
    vector<int> colour(V+1,-1);

    for(int i=1;i<=V;i++)
    {
        if(colour[i]==-1)
        {
            if(check_bipartite(adj,i,colour)==false)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--)
    {
        int V;
        cin>>V;

        vector<vector<int>> adj(V+1);

        bool flag=true;

        for(int i=0;i<V;i++)
        {
            int x,y;
            cin>>x>>y;

           
            adj[x].push_back(y);
            adj[y].push_back(x);

             if(x==y || adj[x].size()>2 || adj[y].size()>2)
            {
               flag=false;
            }

        }
       
        if(flag==false)
            {
                cout<<"No\n";
            }
        else{

         bool ans=is_bipartitite(adj,V);
         if(ans)
            cout<<"Yes\n";
        else
           cout<<"No\n";
        }
        
    }
    return 0;
}