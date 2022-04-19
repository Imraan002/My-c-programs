#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int boys,girls;
	cin>>boys>>girls;
	int t=0;
	if(boys>girls)
	{
		for(int i=1;i<=2*min(boys,girls);i++)
		{
			if(t==0 )
			{
				cout<<"B";
				t=1;
			}
			else if(t==1 ){
				cout<<"G";
				t=0;
			}
		}
	}
	else{
		for(int i=1;i<=2*min(boys,girls);i++)
		{
			if(t==0 )
			{
				cout<<"G";
				t=1;
			}
			else if(t==1 ){
				cout<<"B";
				t=0;
			}
		}
	}

	if(boys>girls)
	{
		for(int i=0;i<boys-girls;i++)
		{
			cout<<"B";
		}
	}
	if(girls>boys)
	{
		for(int i=0;i<girls-boys;i++)
		{
			cout<<"G";
		}
	}
	return 0;
}