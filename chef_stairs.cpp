#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll int N=1e7+10;
vector<ll int> arr(N,1);
vector<ll int> cnt(N,0);
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    arr[0]=arr[1]=0;
     for(ll int i=2;i<=N;i++)
    {
        for(int j=2*i;j<=N;j=j+i)
        {
            arr[j]=0;
        }
    }
    for(int i=2;i<=N;i++)
    {
        cnt[i]=arr[i]+cnt[i-1];
    }
    ll int t;
    cin>>t;
    while(t--)
    {
    	ll int x,y;
    	cin>>x>>y;
    	ll int ans(0);
        ll int dist=y-x;
    	ans=dist-abs(cnt[x+1]-cnt[y]);
    	cout<<ans<<"\n";

    }
    return 0;
}