#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int &x:arr)
		{
			cin>>x;
		}
		int AND=-1;
		for(int i=0;i<n;i++)
		{
			AND=(AND&arr[i]);
		}
		int min=0;
		for(int i=0;i<n;i++)
		{
			min=min|(arr[i]^AND);
		}
		cout<<AND<<" "<<min<<endl;
	}
	return 0;
}