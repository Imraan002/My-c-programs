#include<bits/stdc++.h>
using namespace std;
#define ll long long
long double binary_expo(long double a,int b)
{
	long double ans=1;
	while(b)
	{
		if(b&1)
		{
			ans = ans*a;
		}
		a=a*a;
		b=b/2;
	}
	return ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int n,k;
    cin>>n>>k;
    long double ans=0;

    for(int i=1;i<=k;i++)
    {
    	ans = ans + i*(binary_expo((long double)i/k,n)-binary_expo((long double)(i-1)/k,n)); 
    }
    cout<<fixed<<setprecision(6)<<ans<<"\n";
    return 0;
}