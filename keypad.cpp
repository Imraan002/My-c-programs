#include<bits/stdc++.h>
using namespace std;
#define ll long long
string arr[9]={"*","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void permute(string str,string p)
{
	if(str.empty())
	{
		cout<<p<<"\n";
		return;
	}
	int ch=str[0]-'0';
	for(int i=0;i<arr[ch].size();i++)
	{
		permute(str.substr(1),p+arr[ch][i]);
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
    permute(str,"");
    return 0;
}