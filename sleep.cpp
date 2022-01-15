#include <bits/stdc++.h>
using namespace std;
vector<pair<char,int>> compress(string str)
{
	vector<pair<char,int>> res;
	for(int i=0;i<str.size();i++)
	{
		if(res.size()==0)
		{
			res.push_back({str[i],1});
		}
		else
		{
			if(str[i]==str[i-1] && i!=0)
			{
				res[res.size()-1].second+=1;
			}
			else
			{
				res.push_back({str[i],1});
			}
		}
	}
	return res;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int t;
cin>>t;
while(t--)
{
	int l,sleep;
	cin>>l>>sleep;
	string str;
	cin>>str;
	bool res=false;
	vector<pair<char,int>> vec=compress(str);
	for(auto ele:vec)
	{
		if(ele.first=='1')
		{
			continue;
		}
		else
		{	
			if(ele.second>=sleep)
			{
				res=true;
				break;
			}
			else
			{
				if(ele.second>sleep/2)
				{
					sleep=2*(sleep-ele.second);
				}
			}

		}
		
	}
	if(res==true)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
}
return 0;
}