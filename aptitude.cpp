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
	int n,k;
	cin>>n>>k;
	int arr[n];
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
		for(int i=1;i<=k;i++)
		{
			
			for(int j=0;j<n;j++)
			{
				if(i%arr[j]==0)
					cnt++;
			}
		}
		
	
	cout<<cnt<<endl;
}
return 0;
}