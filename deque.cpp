#include<bits/stdc++.h>
using namespace std;
#define int long long

int n;

vector<int> arr(4000);

int dp[4000][4000];

int rec(int l,int r)
{
	if(l>r)
		return INT_MIN;

	if(l==r)						
		return arr[l];

	if(dp[l][r]!=-1)
		return dp[l][r];

	int ans = max(arr[l]-rec(l+1,r),arr[r]-rec(l,r-1));

	return dp[l][r]=ans;
}
signed main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    cin>>n;

    memset(dp,-1,sizeof(dp));

    for(auto &x:arr)
    {
    	cin>>x;
    }

    int ans =  rec(0,n-1);
    cout<<ans;
    return 0;
}