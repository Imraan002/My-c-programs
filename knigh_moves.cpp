#include<bits/stdc++.h>
using namespace std;
#define ll long long
int vis[8][8];
int level[8][8];
vector<pair<int,int>> movements={
	{-1,-2},{-1,2},
	{-2,-1},{-2,1},
	{1,-2},{1,2},
	{2,-1},{2,1}
};
bool valid(int x,int y)
{
	if(x>=0 && y>=0 && x<8 && y<8)
		return true;
	return false;
}
int get_X(string str)
{
	return str[0]-'a';
}
int get_Y(string str)
{
	return str[1]-'1';
}
int bfs(string s,string d)
{
	int sourceX=get_X(s);
	int sourceY=get_Y(s);
	int destX=get_X(d);
	int destY=get_Y(d);
	queue<pair<int,int>> qu;
	qu.push({sourceX,sourceY});
	vis[sourceX][sourceY]=1;
	level[sourceX][sourceY]=0;
	while(!qu.empty())
	{
		pair<int,int> pr=qu.front();
		qu.pop();
		int X=pr.first;
		int Y=pr.second;
		for(auto move:movements)
		{
			int childX=move.first+X;
			int childY=move.second+Y;
			if(!valid(childX,childY))continue;
			if(!vis[childX][childY])
			{
				qu.push({childX,childY});
				vis[childX][childY]=1;
				level[childX][childY]=level[X][Y]+1;
			}
		}
	}
	return level[destX][destY];
}
void reset()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			vis[i][j]=0;
			level[i][j]=0;
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
    int t;
    cin>>t;
    while(t--)
    {
    	reset();
    	string s,d;
    	cin>>s>>d;
    	cout<<bfs(s,d)<<"\n";
    }
    return 0;
}