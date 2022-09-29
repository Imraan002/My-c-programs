#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int fine,pass,tic;
	cin>>fine>>pass>>tic;

	cout<<(pass-tic)*fine<<"\n";
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