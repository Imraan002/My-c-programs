#include <bits/stdc++.h>
using namespace std;
const int N=1e6;
const int mod=1e9+7;
vector<long long> power(N);
long long calc(string w)
{
	long long res=0;
	for(int i=0;i<w.size();i++)
	{
		res=(res+(w[i]-'a'+1)*power[i])%mod;
	}
	return res;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
vector<string> str={"aa","ab","aa","b","cc","aa"};
power[0]=1;
for(int i=1;i<N;i++)
{
	power[i]=(power[i-1]*31)%mod;
}
vector<long long> hashes;
for(string k:str)
{
	hashes.push_back(calc(k));
}
int cnt=0;
sort(hashes.begin(),hashes.end());
for(int i=0;i<hashes.size();i++)
{
	if( i==0 || hashes[i]!=hashes[i-1])
	{
		cnt++;
	}
}
cout<<cnt;
return 0;
}