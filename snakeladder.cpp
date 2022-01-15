#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int ladnum,snakenum;
	cin>>ladnum;
	map<int,int> lad;
	for(int i=0;i<ladnum;i++)
	{
		int u,v;
		cin>>u>>v;
		lad[u]=v;
	}
	cin>>snakenum;
	map<int,int> snake;
	for(int i=0;i<snakenum;i++)
	{
		int u,v;
		cin>>u>>v;
		snake[u]=v;
	}
	int ans=0;
	queue<int> qu;
	vector<int> vis(101,0);
	qu.push(1);
	vis[1]=1;
	int found=false;
	while(!qu.empty() && found==false)
	{
		int sze=qu.size();
		while(sze--)
		{
			int node=qu.front();
		    qu.pop();
			for(int die=1;die<=6;die++)
			{
				if(node+die==100)
				{
					found=true;
				}
				 if(node+die<=100 && lad[node+die] && !vis[lad[node+die]])
				{
					
					if(lad[node+die]==100)
						found=true;
					qu.push(lad[node+die]);
					vis[lad[node+die]]=1;
					
				}
				else if(node+die<=100 && snake[node+die] && !vis[snake[node+die]])
				{
					vis[snake[node+die]]=1;
					if(snake[node+die]==100)
						found=true;
					qu.push(snake[node+die]);
					
				}
				else if(node+die<=100 && !vis[node+die] /*&& !snake[node+die] && !lad[node+die]*/)
				{
					qu.push(node+die);
					vis[node+die]=1;
				}
				
			}
		}
		ans++;
		if(found)
			cout<<ans;
	}
	
return 0;
}