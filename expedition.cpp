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
	int n;
	cin>>n;
	vector<pair<int,int>>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i].first>>v[i].second;
	}
	int l,p;
	cin>>l>>p;
	for(int i=0;i<n;i++)
	{
		v[i].first=l-v[i].first;
	}
	sort(v.begin(),v.end());
	int ans=0;
	int curr=p;
	
	
	priority_queue<int,vector<int>>pq;
	int flag =0;
	for(int i=0;i<n;i++)
	{
		
		if(curr>=l)
			break;
		while(curr<v[i].first)
		{
			if(pq.empty())
			{
				flag=1;
				break;
			}
			ans++;
			curr=curr+pq.top();
			pq.pop();
		}
		if(flag)
		{
			break;
		}
		pq.push(v[i].second);
	}
	if(flag)
	{
		cout<<-1<<endl;
		continue;
	}
	while(!pq.empty() && curr<l)
	{
		curr=curr+pq.top();
		pq.pop();
		ans++;
	}
	if(curr<l)
	{
		cout<<-1;
		continue;
	}
	cout<<ans<<endl;

}
return 0;
}