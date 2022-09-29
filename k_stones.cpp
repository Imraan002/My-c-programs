#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,k;

vector<int> arr(105);

int dp[100100];

int rec(int stones)
{
	if(stones==0)
		return 0;

	if(dp[stones]!=-1)
		return dp[stones];
	
	int ans=0;

	for(int i=0;i<n;i++)
	{
		if(stones>=arr[i] && rec(stones-arr[i])==0)
		{
			ans = 1;
			break;
		}
	}
	return dp[stones]=ans;
}
signed main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    cin>>n>>k;

    memset(dp,-1,sizeof(dp));

    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }

    int ans=rec(k);

    if(ans)
    	cout<<"First\n";
    else
    	cout<<"Second\n";
    return 0;
}