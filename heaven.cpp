#include <bits/stdc++.h>
using namespace std;
void solve()
{
		int L;
	cin>>L;
	string str;
	cin>>str;
	int gy=0;
	int by=0;
 	for(int i=0;i<L;i++)
 	{
 		if(str[i]=='0')
 			by++;
 		else
 			gy++;
 		if(gy>=by)
 		{
 			cout<<"YES"<<endl;
 			return;
 		}

 	}
 	cout<<"NO"<<endl;
 	
}
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
	solve();
}	
return 0;
}