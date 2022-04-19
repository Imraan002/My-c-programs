#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool find_palindrome(string str)
{
	if(str.length()==1)
		return true;
	if(str.length()==2)
	{
		if(str[0]==str[1])
			return true;
		else
			return false;
	}
	string temp=str.substr(1,str.length()-2);
	bool ans=find_palindrome(temp);
	if(ans==true)
	{
		if(str[0]==str[str.length()-1])
			return true;
	}
	return false;

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
   cout<<find_palindrome(str);
    return 0;
}