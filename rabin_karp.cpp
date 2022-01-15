#include <bits/stdc++.h>
using namespace std;
const int N=100;
long long int mod=1e9+7;
vector<int> powdp(N,0);
int hashfun(string str)
{
	int value=0;
	for(int i=0;i<str.size();i++)
	{
		value=value+((str[i]-'a'+1)*powdp[i])%mod;
	}
	return value;
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
powdp[0]=1;
for(int i=1;i<N;i++)
{
	powdp[i]=(powdp[i-1]*31)%mod;
}
int r=0,l=0;
int hashval=0;
int patval=hashfun(pat);							//string matching algorithm 
cout<<"pattern found at index ";
while(r<str.size())									//rabin karp
{
	hashval=hashfun(str.substr(l,r-l+1));
	if(r-l+1==pat.size())
	{
		if(hashval==patval)
			cout<<l<<",";
		l++;
	}
	r++;
}
return 0;
}