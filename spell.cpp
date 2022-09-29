#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	
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
		int n;
		cin>>n;
		string str;
		cin>>str;

		if(n!=5)
		{
			cout<<"No\n";
			continue;
		}
		map<char,int> mp;

		for(int i=0;i<str.size();i++)
		{
			mp[str[i]]+=1;
		}
		bool ans=false;

		if(mp['T']==1 && mp['i']==1 && mp['m']==1 && mp['u']==1 && mp['r']==1)
		{
			ans=true;
		}
		if(ans)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}