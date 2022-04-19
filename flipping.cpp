#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int cnt=0;
	int l(0),r(0);
	
	int k=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{

			if(i==0){

				k=((j-i+1)-count(arr+i,arr+j,1))+count(arr+j+1,arr+n,1);
				if(k>cnt)
				{
					cnt=k;
					l=i;
					r=j;
				}
			}
			else
			{
				k=count(arr,arr+i,1)+((j-i+1)-count(arr+i,arr+j,1))+count(arr+j+1,arr+n,1);
				if(k>cnt)
				{
					cnt=k;
					l=i;
					r=j;
				}
			}
			
		}
	}
	if(n==1)
	{
		if(arr[0]==0)
			cout<<1<<"\n";
		else
			cout<<0<<"\n";
	}
	else if(count(arr,arr+n,1)==n)
	{
		cout<<n-1<<"\n";
	}
	else
		cout<<cnt<<"\n";
	return 0;
}