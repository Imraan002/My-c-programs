#include<bits/stdc++.h>
using namespace std;
#define ll long long
int M=1e9+7;
int binary_expo(int n,int base)
{
	int res=1;
	while(base)
	{
		if(base&1)
		{
			res=(res*n*1LL)%M;
		}
		n=(n*n*1LL)%M;
		base/=2;
	}
	return res;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin>>n;
    cout<<binary_expo(n,M-2);
    return 0;
}