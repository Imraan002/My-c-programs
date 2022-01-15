#include<bits/stdc++.h>
using namespace std;
#define ll long long
int solve(string &str,int pos)
{
	if(pos>str.length())
		return 1;
	if(str[pos]=='0')
		return 0;
	int res=solve(str,pos+1);
	if(pos+1<str.length() && (str[pos]=='1' || (str[pos]=='2' && str[pos+1]<='6')))
		res=res+solve(str,pos+2);
	return res;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	string str;
	cin>>str;
	cout<<solve(str,0);
	return 0;
}