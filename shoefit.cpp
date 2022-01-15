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
		ll arr[3];
		ll left=0;
		ll right=0;
		for(int i=0;i<3;i++)
		{
			cin>>arr[i];
			if(arr[i]==0)
				left++;
			else
				right++;
		}
		if(left>0 && right>0)
			cout<<1<<endl;
		else
			cout<<0<<endl;
	}
	return 0;
}