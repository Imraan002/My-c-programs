#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll int n,m,x,y;
    	cin>>n>>m>>x>>y;
    	ll int ans(0);
    	if(y>=2*x)
    	{
    		ans=(n+m-2)*x;
    	}
    	else if(y<2*x && y>x)
    	{
    		ans=(min(n-1,m-1))*y+abs(m-n)*x;
    	}
    	else{
    		ans=(min(n-1,m-1))*y+((abs(m-n)/2)*2)*y+(abs(m-n)%2)*x;
    	}
    	cout<<ans<<endl;

    }
    return 0;
}