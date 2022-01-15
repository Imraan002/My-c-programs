#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int T;
cin>>T;
while(T--)
{
	int n,m;
	cin>>n>>m;
	vector<int> arr(n);
	vector<int> brr(m);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int k=0;
	sort(arr.begin(),arr.end());
	sort(brr.begin(),brr.end());
	for(int i=0;i<m;i++)
	{
		cin>>brr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i]==brr[j] and arr[i]%3==0)
			
			{cout<<arr[i]<<" ";
			k++;
		}
		}
		

	}
	if(k==0)
		cout<<-1;
}
return 0;
}