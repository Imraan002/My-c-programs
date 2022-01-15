#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

int n,q;
cin>>n>>q;
vector<int> arr(n);
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
sort(arr.begin(),arr.end(),greater<int>());
int jump=sqrt(n);
while(q--)
{
	long long int x;
	cin>>x;
	long long int pos=0;
	while(pos+jump<n && arr[pos+jump]>x)
	{
		pos=pos+jump;
	}
	while(pos<n && arr[pos]>x)
	{
		pos++;
	}
	if(arr[pos]==x)
		cout<<0<<endl;
	else if(pos%2==0)
		cout<<"POSITIVE"<<endl;
	else if(pos%2!=0)
		cout<<"NEGATIVE"<<endl;
}
return 0;
}