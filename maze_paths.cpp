#include<bits/stdc++.h>
using namespace std;
#define ll long long
void permute_ways(vector<vector<int>> &arr,int r,int c,string p)
{
	if(r==arr.size()-1 && c==arr[0].size()-1)
    {
        cout<<p<<"\n";
        return;
    }
    if(r<arr.size()-1)
    {
        permute_ways(arr,r+1,c,p+'D');
    }
    if(c<arr[0].size()-1)
    {
        permute_ways(arr,r,c+1,p+'R');
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    vector<vector<int>> arr={{1,1,1},
    			   	         {1,1,1},
    			             {1,1,1}
    				};
    permute_ways(arr,0,0,"");
    return 0;
}