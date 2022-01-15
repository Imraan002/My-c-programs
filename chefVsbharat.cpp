#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
const int N=1e5+5;
vector<long long> arr(N,0);
vector<long long> sum(N,0);
 long long func(int i)
{
	int num=i/10;
	long long res=i;
		while(num>0)
		{
			res=res*10+num%10;
			num=num/10;
		}
		return res;
}

 long long power(long long a,long long b)
{
	long long ans=1;
	if(b==0)
		return 1;
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

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false); cin.tie(NULL);
	for(int i=1;i<N;i++)
	{
		arr[i]=func(i);
		sum[i]=sum[i-1]+arr[i];
	}
	int q;
cin>>q;
while(q--)
{
	long long  l,r;
	cin>>l>>r;
	long long diff=sum[r]-sum[l];
	cout<<power(arr[l],diff)<<endl;

}
	return 0;
}