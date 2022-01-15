#include<bits/stdc++.h>
using namespace std;
#define ll long long
void paths(int r,int c,vector<vector<int>> &arr,int steps)
{
	if(r==arr.size()-1 && c==arr[0].size()-1)
	{
		arr[r][c]=steps;
		for(auto k:arr)
		{
			for(auto t:k)
			{
				cout<<t<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	if(arr[r][c]!=0)
		return;
	arr[r][c]=steps;
	if(c<arr[0].size()-1)
	{
		paths(r,c+1,arr,steps+1);
	}
	if(c>0)
	{
		paths(r,c-1,arr,steps+1);
	}
	if(r>0)
	{
		paths(r-1,c,arr,steps+1);
	}
	if(r<arr.size()-1)
	{
		paths(r+1,c,arr,steps+1);
	}
	arr[r][c]=0;				//backtracking
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    vector<vector<int>> arr={{0,0,0},
				             {0,0,0},
				             {0,0,0}};
	paths(0,0,arr,1);
    return 0;
}