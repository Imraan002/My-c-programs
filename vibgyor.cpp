#include <bits/stdc++.h>
using namespace std;

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
	int n;
	cin>>n;
	int cnt=0;
	int k=0;
	int arr[n+1];
	for(int i=1;i<=n;i++)
	{
		
		int x;
		cin>>x;
		if(cnt==7)
			break;
		if(x==1||x==2||x==3||x==4||x==5||x==6||x==7)
		{
			cnt++;
		}
		k++;
	}
	if(cnt==7)
		cout<<k<<endl;
	else
		cout<<-1<<endl;
}
return 0;
}