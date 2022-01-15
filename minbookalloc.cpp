#include <bits/stdc++.h>
using namespace std;
bool isfeasible(int arr[],int n,int mid,int k)
{
	int stu=1;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(sum+arr[i]>mid)
		{
			stu++;
			sum+=arr[i];
		}
		else;
		{
			sum+=arr[i];
		}
		
	}
	return stu<=k;
}

int minbook(int arr[],int n,int k)
{
	int minele=*max_element(arr,arr+n);
	int maxele=accumulate(arr,arr+n,0);
	int ans;
	while(minele<=maxele)
	{
		int mid=(minele+maxele)/2;
		if(isfeasible(arr,n,mid,k))
		{
			ans=mid;
			maxele=mid-1;
		}
		else{
			minele=mid+1;
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
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
int k;
cin>>k;
cout<<minbook(arr,n,k);
return 0;
}