#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
long long int t;
cin>>t;
while(t--)
{
	long long int A,B,X;
	cin>>A>>B>>X;
	cout<<(B-A)/X<<endl;
}
return 0;
}