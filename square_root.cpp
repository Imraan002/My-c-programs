#include<bits/stdc++.h>
using namespace std;
#define ll long long
float solve(int n,int prec)
{
	int low=0;
	int high=n;
	float ans;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(mid*mid==n)
		{
			ans=mid;
			break;
		}
		else if(mid*mid<n)
		{
			low=mid+1;
			
		}
		else{
			high=mid-1;
		}
	}
	float inc=0.1;
	for(int i=0;i<prec;i++)
	{
		while(ans*ans<=n)
		{
			ans+=inc;
		}
		ans-=inc;
		inc/=10;
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
    int n,prec;
    cin>>n>>prec;
    cout<<solve(n,prec);
    return 0;
}