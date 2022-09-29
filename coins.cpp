#include<bits/stdc++.h>
using namespace std;
#define sp(x) fixed<<setprecision(x)
#define int long long

int n;

double dp[4008][4008];

int done[4008][4008];

vector<double> arr(4000);

double rec(int level,int heads_till_now)
{
    if(level==n)
    {
        if(heads_till_now>(n-heads_till_now))
            return 1;
        else 
            return 0;
    }

    if(done[level][heads_till_now]==1)
        return dp[level][heads_till_now];

    double ans = arr[level]*rec(level+1,heads_till_now+1)+(1-arr[level])*rec(level+1,heads_till_now);

    done[level][heads_till_now]=1;

    return dp[level][heads_till_now]=ans;
}
signed main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    memset(dp,-1,sizeof(dp));

    double ans = rec(0,0);
    cout<<fixed<<setprecision(10)<<ans;
    return 0;
}