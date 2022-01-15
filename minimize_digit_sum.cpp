#include<bits/stdc++.h>
using namespace std;
#define ll long long
int fun(int num,int base)
{
	int sum=0;
	while(num)
	{
		sum+=num%base;
		num/=base;
	}
	return sum;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n,l,r;
    	int ans=INT_MAX;
    	int base=-1;
    	cin>>n>>l>>r;
    	for(int i=l;i<=r;i++)
    	{
    		if(l<=n && r>=n)
    		{
    			base=n;
    			break;
    		}
    		int temp=fun(n,i);
    		if(temp<ans)
    		{
    			ans=temp;
    			base=i;
    		}
    	}
    	cout<<base<<endl;
    }
    return 0;
}