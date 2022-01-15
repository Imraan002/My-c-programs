#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
	cin>>v[i];
}
sort(v.begin(),v.end());
long long int mx,mn;
mx=0;
mn=0;
for(int i=0;i<n/2;i++)
{
	mx+=v[n/2+i]-v[i];
	mn+=v[2*i+1]-v[2*i];
}
cout<<mn<<endl;
cout<<mx<<endl;
return 0;
}