#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
string T ="na";
string S="apna collegena";
for(int i=0;i<S.size();i++)
{
	if(S.substr(i,T.size())==T)
		cout<<"Found at "<<i<<" index"<<endl;
}
cout<<S.substr(2,6);
return 0;
}