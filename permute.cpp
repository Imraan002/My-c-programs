#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(string str,string p)
{
	if(str=="")
	{
		cout<<p<<"\n";
		return ;
	}
	for(int i=0;i<=p.size();i++)
	{
		string left=p.substr(0,i);
		string right=p.substr(i);
		char ch=str[0];
		solve(str.substr(1),left+ch+right);
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