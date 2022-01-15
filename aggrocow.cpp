#include <bits/stdc++.h>
using namespace std;
const int N=1e6;
int pos[N];
int n,cow;
bool isfeasible(int dist)
{
	int cnt=cow;
	int last=-1;
	for(int i=0;i<n;i++)
	{
		if(pos[i]-last>=dist || last==-1)
		{
			cnt--;
			last=pos[i];
		}
		if(cnt==0)
			break;

	}
	return cnt==0;
}
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
	cin>>n>>cow;
	for(int i=0;i<n;i++)
	{
		cin>>pos[i];
	}
	sort(pos,pos+n);
	int low=0;
	int high=1e9;
	while(high-low>1)
	{
		int mid=(low+high)/2;
		if(isfeasible(mid))
		{
			low=mid;
		}
		else
		{
			high=mid-1;
		}
	}
	if(isfeasible(high))
		cout<<high<<endl;
	else
		cout<<low<<endl;
}
return 0;
}