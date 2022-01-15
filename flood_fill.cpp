#include<bits/stdc++.h>
using namespace std;
#define ll long long
void dfs(int i,int j,int prevcolor,vector<vector<int>> &image,int newcolor)
{
	if(i<0 || j<0 || i>=image.size() || j>=image[0].size())
		return;

	if(image[i][j]!=prevcolor)
		return;
	image[i][j]=newcolor;
	dfs(i+1,j,prevcolor,image,newcolor);
	dfs(i-1,j,prevcolor,image,newcolor);
	dfs(i,j+1,prevcolor,image,newcolor);
	dfs(i,j-1,prevcolor,image,newcolor);
}
void floodFill(vector<vector<int>> &image, int sr, int sc, int newColor) {
	if(image[sr][sc]==newColor)
		return;
	
	dfs(sr,sc,image[sr][sc],image,newColor);	
}
int main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	vector<vector<int>> image={{1,1,1},
								{1,1,0},
								{1,0,1}
								};
	floodFill(image,1,1,2);
	for(int i=0;i<image.size();i++)
	{
		for(int j=0;j<image[0].size();j++)
		{
			cout<<image[i][j]<<" ";
		}
		cout<<"\n";
	}
return 0;
}