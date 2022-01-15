#include <bits/stdc++.h>
using namespace std;
vector<int> lps(string nstr)
{
	vector<int> temp(nstr.size(),0);
	for(int i=1;i<nstr.size();i++)
	{
		int j=temp[i-1];
		while(j>0 && nstr[i]!=nstr[j])
		{
			j=temp[j-1];
		}
		if(nstr[i]==nstr[j])
		{
			j++;
			temp[i]=j;
		}

	}
	return temp;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
string str;
cin>>str;
string pat;
cin>>pat;
vector<char> vec;
for(int i=0;i<pat.size();i++)
{
	vec.push_back(pat[i]);
}
vec.push_back('#');
for(int i=0;i<str.size();i++)
{
	vec.push_back(str[i]);
}
string nstr(vec.begin(),vec.end());

vector<int> res=lps(nstr);
int cnt=0;
for(int i=0;i<res.size();i++)
{
	if(res[i]==pat.size())
	{
		cnt++;
		cout<<i-(pat.size()+1)-2<<" ";
	}
}
cout<<endl;
cout<<cnt;
return 0;
}