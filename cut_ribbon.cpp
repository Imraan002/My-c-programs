#include<bits/stdc++.h>
using namespace std;
#define ll long long

int dp[4010];
int cut_ribbon(int n,vector<int> &arr)
{
    if(n==0)return 0;

    if(dp[n]!=-1)return dp[n];
    
    int final_ans=INT_MIN;

    for(int i=0;i<3;i++)
    {
    	if(n-arr[i]>=0)
    		final_ans=max(final_ans,1+cut_ribbon(n-arr[i],arr));
    }

return dp[n]=final_ans;

}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
 
    memset(dp,-1,sizeof(dp));
    int n,a,b,c;
    cin>>n>>a>>b>>c;

    vector<int> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    
    int ans=cut_ribbon(n,arr);
    cout<<ans;
    return 0;
}	