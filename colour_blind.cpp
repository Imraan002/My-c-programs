#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int col;
	cin>>col;

	string str1,str2;
	cin>>str1>>str2;

	bool ans=true;

	for(int i=0;i<col;i++)
	{
		if(str1[i]!=str2[i] && (str1[i]=='R' || str2[i]=='R'))
		{
			ans=false;
			break;
		}
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