#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
string s;
cin>>s;
int start=-1;
int len=INT_MIN;
vector<int> v(26,-1);
for(int i=0;i<s.length();i++)
{
	if(v[s[i]]>start)
	{
		start=v[s[i]];
	}
	v[s[i]]=i;
	len=max(len,i-start);
}
cout<<len<<endl;
return 0;

}