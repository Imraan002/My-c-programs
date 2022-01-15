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
	int t;
	cin>>t;
	while(t--)
	{
		int arr[3];
		for(int i=0;i<3;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+3);
		cout<<arr[1]+arr[2]<<endl;
	}
	return 0;
}