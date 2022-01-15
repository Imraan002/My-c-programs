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
	int A,B,C,D;
	cin>>A>>B>>C>>D;
	if(A+C==180 && B+D==180)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
return 0;
}