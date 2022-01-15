#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
int b;
cin>>b;
map<int,int> mp;
for(int i=0;i<n;i++)
{
	int k=arr[i]%b;
	arr[i]=k;
	mp[k]++;
}	
int ans=0;
for(int i=0;i<n;i++)
{
	if(i==0)
	{
		ans+=(mp[0]*(mp[0]-1))/2;
	}
	else{
		ans+=mp[arr[i]]*mp[b-arr[i]];
	}
}	
cout<<ans<<endl;
	return 0;

}