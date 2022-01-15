#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+10;
const int INF=1e9+10;
vector<pair<int,int>> Tree[N];
vector<int> level(N,INF);
int n,m;
int bfs()												//   0/1 BFS
{
	deque<int> qu;
	qu.push_back(1);
	level[1]=0;
	while(!qu.empty())
	{
		int element=qu.front();
		qu.pop_front();
		for(auto child:Tree[element])
		{
			int child_ele=child.first;
			int wt=child.second;
			if(level[element]+wt<level[child_ele])
			{
				level[child_ele]=level[element]+wt;
				if(wt==1)
				{
					qu.push_back(child_ele);
				}
				else{
					qu.push_front(child_ele);
				}
			}
			
		}
	}
	return (level[n]==INF)?-1:level[n];
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
    	int x,y;
    	cin>>x>>y;
    	if(x==y)continue;
    	Tree[x].push_back({y,0});
    	Tree[y].push_back({x,1});
    }
    cout<<bfs();
    return 0;
}