#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
int n;
cin>>n;
int arr[n];
for(auto &x:arr)
{
	cin>>x;
}
int len=sqrtl(n)+1;
int brr[len];
for(int i=0;i<n;i++)
{
	brr[i/len]+=arr[i];
}
int q;
cin>>q;

while(q--)
{
	int l,r;
	cin>>l>>r;
	int sum=0;
	for(int i=l;i<=r;)
	{
		if(i%len==0 && i+len-1<=r)
		{
			sum+=brr[i/len];
			i+=len;
		}
		else
		{
			sum+=arr[i];
			i++;
		}
	}
	cout<<sum<<endl;
}
return 0;
}