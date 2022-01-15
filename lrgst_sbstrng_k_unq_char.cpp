#include <bits/stdc++.h>
using namespace std;
int solve(string str,int k)
{
	unordered_map<char,int>mp;
	mp.clear();
	int i=0;
	int j=0;
	int len=INT_MIN;
	while(j<str.size())
	{
		mp[str[j]]++;
		if(mp.size()<k)
		{
			j++;
		}
		else if(mp.size()==k)
		{
			len=max(len,j-i+1);
		}
		else if(mp.size()>k)
		{
			while(mp.size()>k)
			{
				mp[str[i]]--;
				if(mp[str[i]]==0)
				{
					mp.erase(str[i]);
				}
				i++;
			}
			j++;
		}

	}
	return len;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
string str;
int k;
cin>>str;
cin>>k;
int ans=solve(str,k);
cout<<ans;

return 0;
}