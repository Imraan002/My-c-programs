#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(string str,string psf)
{
	if(str.size()==0)
	{
		cout<<psf<<"\n";
		return;
	}
	for(int i=0;i<str.size();i++)
	{
		char ch=str[i];
		string left=str.substr(0,i);
		string right=str.substr(i+1);
		string restofstr=left+right;
		solve(restofstr,psf+ch);
	}
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string str;
    cin>>str;
    solve(str,"");
    return 0;
}