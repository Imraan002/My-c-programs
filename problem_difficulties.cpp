#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<int,int> mp;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	int ans;
	while(t--)
	{
		int a1,a2,a3,a4;
		cin>>a1>>a2>>a3>>a4;
		map<int,int> mp;
		mp[a1]++;
		mp[a2]++;
		mp[a3]++;
		mp[a4]++;
		bool cnt4(false),cnt3(false),cnt2(false);
		for(auto k:mp)
		{
			if(k.second==4)
			{
				cnt4=true;
			}
			if(k.second==3)
			{
				cnt3=true;
			}
			if(k.second==2)
			{
				cnt2=true;
			}
		}
		if(cnt4)
		{
			cout<<0<<endl;
		}
		else if(cnt3)
		{
			cout<<1<<endl;
		}
		else if(cnt2)
		{
			cout<<2<<endl;
		}
		else
			cout<<2<<endl;

	}
	return 0;
}