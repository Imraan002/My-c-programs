#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxnum=1024;
ll int arr[maxnum];

ll next(ll int n)
{
	if(n==0)
		return 0;
	ll ans=0;

	for(int i=1;i<=maxnum;i++)
	{
		if(arr[i]<n)
		{
			ans+=arr[i]*(arr[i]-arr[i-1]);
		}
		else{
			ans+=arr[i]*(n-arr[i-1]);
			break;Codeforces
		}
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
    
    int l,r;
    cin>>l>>r;

    arr[1]=4;
    arr[2]=7;

    int t=3;

    for(int i=1;i<=512;i++)
    {
    	arr[t++]=arr[i]*10+4;
    	arr[t++]=arr[i]*10+7;
    }

    cout<<next(r)-next(l-1)<<"\n";
    return 0;
}