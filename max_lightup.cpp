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
	ll int t;
	cin>>t;
	while(t--)
	{
		ll int p,f,a,c,x,y;
		cin>>p>>f>>a>>c>>x>>y;
		ll int anr1=a+f*x;
		ll int chakri1=c+y*f;
		ll int ans=0;
		if(anr1<chakri1)
		{
			ans+=p/anr1;
			ll int temp=p%anr1;
			ans+=temp/chakri1;
		}
		else if(chakri1<anr1)
		{
			ans+=p/chakri1;
			ll int temp=p%chakri1;
			ans+=temp/anr1;
		}
		else{
			ans+=p/chakri1;
			ll int temp=p%chakri1;
			ans+=temp/anr1;
		}
		
		cout<<ans<<endl;

	}    
    return 0;
}
