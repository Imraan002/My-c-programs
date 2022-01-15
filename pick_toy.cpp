#include <bits/stdc++.h>
using namespace std;
int solve(string str)
{	unordered_map<char,int>mp;
	mp.clear();
	int j=0;
	int i=0;
	int len=INT_MIN;
	while(j<str.size())
	{	
		mp[str[j]]++;
		 if(mp.size()<2)
		 {
		 	j++;
		 }
		else if(mp.size()==2)
		{
			len=max(len,j-i+1);
			j++;
		}
		else if(mp.size()>2)
		{
			while(mp.size()>2)
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
cin>>str;
cout<<solve(str);
return 0;
}