#include <bits/stdc++.h>
using namespace std;
int solve(string str1,string str2)
{
	int i=0;
	int j=0;
	int len=INT_MAX;
	unordered_map<char,int>mp;
	mp.clear();
	
	while(j<str2.size())
	{
		mp[str2[j++]]++;
	}
	int cnt=mp.size();
	j=0;
	while(j<str1.size())
	{
		while(j<str1.size() && cnt!=0)
		{	if(mp.find(str1[j])!= mp.end())
			{
					mp[str1[j]]--;
				if(mp[str1[j]]==0)
				{
					cnt--;
				}
			}

			j++;
		}
		if(cnt==0)
		{
			len=min(len,j-i+1);
			while(cnt==0 && i<j)
			{
				if(mp.find(str1[i])==mp.end())
				{
					i++;
				}
				else
				{
					mp[str1[i]]++;
					{
						if(mp[str1[i]]>0)
						{
							cnt++;
						}
					}
					i++;
				}
					len=min(len,j-i+1);
			}

				
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
string str1;
cin>>str1;
string str2;
cin>>str2;
cout<<solve(str1,str2);

return 0;
}