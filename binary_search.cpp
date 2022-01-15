#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &v,int low,int high,int k)
{
	if(high>=low)
	{
		int mid=(low+high)/2;
		if(v[mid]==k)
			return mid+1;
		else if(v[mid]>k)
			return search(v,low,mid-1,k);
		return search(v,mid+1,high,k);
	}
	
	return -1;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++)
{
	cin>>v[i];
}
int k;
cin>>k;
sort(v.begin(),v.end());
cout<<search(v,0,n-1,k);

return 0;
}