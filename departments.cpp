#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int emp,q;
    cin>>emp>>q;

    vector<int> adj[emp+1];

    vector<int> visited(emp+1,0);

    vector<pair<int,int>> indegree(emp+1),indegree2;

    for(int i=0;i<emp+1;i++)
    {
        indegree[i].second=i;
    }

    for(int i=0;i<q;i++)
    {
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);

        indegree[x].first+=1;
        indegree[y].first+=1;

    }
    indegree2=indegree;
    sort(indegree2.begin(),indegree2.end());
    vector<int> res(emp+1),head(emp+1);

    int curr=0;

    for(int i=1;i<emp+1;i++)
    {
        int node = indegree2[i].second;

        if(visited[node])continue;

        visited[node]=1;

        res[node] = ++curr;
        int manager = node;

        for(auto child:adj[node])
        {
            if(!visited[child])
            {
                res[child] =curr;
                visited[child]=1;

                if(indegree[child].first>indegree[manager].first)
                {
                    manager = indegree[child].second;
                }
            }
        }
        head[curr]=manager;

    }

    cout<<curr<<"\n";

    for(auto ele:res)
    {
        if(ele!=0)
            cout<<ele<<" ";
    }
    cout<<"\n";
    for(int i=1;i<=curr;i++)
    {
        cout<<head[i]<<" ";
    }
    cout<<"\n";
   
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t;
    cin >> t;


    while(t--)
    {
        solve();
    }
    return 0;
}