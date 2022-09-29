#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin>>n;

	map<int,int> mp;

	int single_rep(0);
	int more_rep(0);
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;

		mp[temp]+=1;
	}

	for(auto ele:mp)
	{
		
		if(ele.second==1)
		{
			single_rep++;
		}
		else{
			more_rep++;
		}
	}
//	cout<<single_rep<<" "<<more_rep<<"\n";
	bool ans=false;

	if(more_rep>=(single_rep%2))
	{
		ans=true;
	}
	if(ans)
		cout<<"Yes\n";
	else
		cout<<"No\n";

}

signed main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int t;
	cin >> t;


	while(t--)
	{
		solve();
	}
	return 0;
}