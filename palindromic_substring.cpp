#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool is_palindrome(string &str)
{
	if(str.size()==1)
		return true;

	int i=0;
	int j=str.size()-1;

	while(i<j)
	{
		if(str[i]!=str[j])
			return false;
		i++;
		j--;
	}
	return true;
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

	int ans=0;

	int j=0;
	int i=0;

	string k;
	while(i<str.size())
	{

		if(i+1<=str.size())
			 k=str.substr(j,i+1);

		while(i<str.size() && is_palindrome(k)==true)
		{
			i++;

			k= str.substr(0,i+1);
		}

		ans++;

		j=i;
	}


	cout<<ans<<"\n";


	return 0;
}