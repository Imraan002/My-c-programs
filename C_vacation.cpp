#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int K=1e5+10;
int N;
int arr[K][4];
int dp[K][4];
int vacation(int day,int prev)
{
    if(day==N)
        return 0;
    int ans=INT_MIN;
    if(dp[day][prev]!=-1)
        return dp[day][prev];
    if(prev==0)
    {
        ans=max(ans,arr[day][1]+vacation(day+1,1));
        ans=max(ans,arr[day][2]+vacation(day+1,2));
        ans=max(ans,arr[day][3]+vacation(day+1,3));
    }
    else if(prev==1)
    {
        ans=max(ans,arr[day][2]+vacation(day+1,2));
        ans=max(ans,arr[day][3]+vacation(day+1,3));
    }
    else if(prev==2)
    {
        ans=max(ans,arr[day][1]+vacation(day+1,1));
        ans=max(ans,arr[day][3]+vacation(day+1,3));
    }
    else{
         ans=max(ans,arr[day][1]+vacation(day+1,1));
         ans=max(ans,arr[day][2]+vacation(day+1,2));
    }
    return dp[day][prev]=ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin>>N;
    for(int i=0;i<N;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cin>>arr[i][j];
        }
    }
    memset(dp,-1,sizeof(dp));
    cout<<vacation(0,0);
    return 0;
}