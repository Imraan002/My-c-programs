#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
int arr[n];
int sum=0;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
int left[n];
left[0]=arr[0];
for(int i=1;i<n;i++)
{
	left[i]=max(left[i-1],arr[i]);
}
int right[n];
right[n-1]=arr[n-1];
for(int i=n-2;i>=0;i--)
{
	right[i]=max(right[i+1],arr[i]);
}
for(int i=0;i<n;i++)
{
	int k=min(right[i],left[i])-arr[i];
	sum+=k;
}
cout<<sum;



return 0;
}