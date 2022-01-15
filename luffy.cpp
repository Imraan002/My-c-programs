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
	int n,k,f;
	cin>>n>>k>>f;
	vector<pair<int,int>> arr;
	for(int i=0;i<n;i++)
	{
		int dist,food;
		cin>>dist>>food;
		arr.push_back({k-dist,food});
	}
	sort(arr.begin(),arr.end());
	bool can_reach=true;
	multiset<int> totalfood;
	int curr=0;
	int ans=0;
	for(int i=1;i<k;i++)
	{
		f--;
		if(arr[curr].first==i)
		{
			totalfood.insert(arr[curr].second);
			curr++;
		}
		if(f==0)
		{
			if(totalfood.size()==0)
			{
				can_reach=false;
				break;
			}
			else{
				auto it=--totalfood.end();
				f=f+(*it);
				totalfood.erase(it);
				ans++;
			}
			
		}
	}
	if(can_reach)
		cout<<ans<<endl;
	else
		cout<<-1<<endl;

}
return 0;
}