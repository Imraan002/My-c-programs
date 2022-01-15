#include <bits/stdc++.h>
using namespace std;
#define long long int
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int t;
cin>>t;
while(t--)
{
	int n,h;
	cin>>n>>h;
	bool ans=true;
	int res=0;
	vector<pair<int,int>> vec(n);
	for(int i=0;i<n;i++)
	{
		cin>>vec[i].first;
	}
	for(int i=0;i<n;i++)
	{
		cin>>vec[i].second;
		vec[i].second-=h;
	}
	for(int i=0;i<n;i++)
	{
		if(vec[i].first<=vec[i].second)
		{
			ans=false;
			break;
		}
		res=max(res,(vec[i].first+vec[i].second+2)/2);
	}
	if(ans==false)
		cout<<-1<<endl;
	else
		cout<<res<<endl;for(int i=0;i<n;i++);

}

return 0;
}