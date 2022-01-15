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
	if(n==1)
		cout<<n<<endl;
	else
		cout<<1+n/2<<endl;
}
return 0;
}