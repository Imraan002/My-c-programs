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
	int n;
	cin>>n;
	int arr[n];
	bool ans=1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		int res=arr[i+1]-arr[i];
		if(res<0 and res>2)
		{
			ans=0;
		}
	}
	if(ans==0)
		cout<<"NO"<<endl;

    else 
    	cout<<"YES"<<endl;
}
return 0;
}