#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int cnt=0;
		for(int c=1;c<=n;c++)
		{
			for(int b=c;b<=n;b=b+c)
			{
				for(int a=c;a<=n;a=a+b)
				{
					if(a%b==c && b%c==0)
					{
						cnt++;
					}
				}
			}
		}
		cout<<cnt<<endl;

	}
	return 0;
}