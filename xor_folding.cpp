#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
int t;
cin>>t;
while(t--)
{
	int n,m;
	cin>>n>>m;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			char x;
			cin>>x;
			if(x=='1')
			{

				cnt++;
			}
		}
	}
	if(cnt&1)
	{
		cout<<"yes"<<endl;
	}
	else
		cout<<"no"<<endl;
}
return 0;
}