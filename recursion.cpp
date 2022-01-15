#include<bits/stdc++.h>
using namespace std;
#define ll long long
string remove_ch(string str)
{
	if(str=="")
		return str;
	if(str[0]=='a')
	{
		return remove_ch(str.substr(1));
	}
	else{
		return str[0]+remove_ch(str.substr(1));
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
 	cout<<remove_ch(str)<<"\n"; 
    return 0;
}