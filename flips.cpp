#include<bits/stdc++.h>
using namespace std;
#define int long long

const int mod=1e9+7;

int binary_expo(int a,int b)
{
     int ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        b=b>>1;
    }
    return ans;
}
void solve()
{
    int n,k;
    cin>>n>>k;

    string str;
    cin>>str;
    
    if(k==n)
        cout<<2<<"\n";
    else if(k&1)
        cout<<(binary_expo(2,n))%mod<<"\n";
    else
        cout<<(binary_expo(2,n-1))%mod<<"\n";
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t;
    cin >> t;


    while(t--)
    {
        solve();
    }
    return 0;
}