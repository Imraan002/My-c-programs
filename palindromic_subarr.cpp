#include <bits/stdc++.h>
using namespace std;
bool ispalin(int num)
{	bool ans=false;
	int sum=0;
	int temp=num;
	while(temp!=0)
	{
		int rem=temp%10;
		sum=sum*10+rem;
		temp=temp/10;
	}
	if(sum==num)
		ans=true;
	
	return ans;

}
void solve(int arr[],int n,int k)
{
	vector<int> res;
	int sum=0;
	int s,e;
	int i=0;
	for (int t = 0; t < k; ++t)
	{
		sum=sum*10+arr[t];
	}
	if(ispalin(sum))
	{
		s=0;
		e=k-1;
	}
	for (int j = k; j < n; ++j)
	{
		sum=sum*10+arr[j];
		sum=sum%((int)pow(10,k));
		if(ispalin(sum))
		{
			s=j-k+1;
			e=j;
		}
	}
	for (int z = s; z<= e; ++z)
	{
		cout<<arr[z]<<" ";
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; ++i)
{
	cin>>arr[i];
}
int k;
cin>>k;
solve(arr,n,k);

return 0;
}