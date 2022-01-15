#include <bits/stdc++.h>
using namespace std;
vector<string>ans;
void gnrtprn(string str,int open,int close)
{
	if(open==0 && close==0)
	{
		ans.push_back(str);
		return;
	}
	if(open>0)
	{
		str.push_back('(');
		gnrtprn(str,open-1,close);
		str.pop_back();
	}
	if(close>0)
	{
		if(open<close)
		{
			str.push_back(')');
			gnrtprn(str,open,close-1);
			str.pop_back();
		}
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
gnrtprn(" ",n,n);
for(auto ele:ans)
{
	cout<<ele;
}
return 0;
}