#include <bits/stdc++.h>
using namespace std;
void solve(int arr[],int n,int sum)
{
	int start=0;
	int end=-1;
	int currsum=0;
	map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		currsum+=arr[i];
		if(currsum==sum)
		{									//subarray with the given sum
			start=0;
			end=i;
			break;
		}
		if(mp.find(currsum-sum)!=mp.end())
		{
			start=mp[currsum-sum]+1;
			end=i;
			break;
		}
		mp.insert({currsum,i});

	}
	if(end==-1)
		cout<<"not found"<<endl;
	else 
		cout<<start<<" "<<end<<endl;

}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
int sum;
cin>>sum;
solve(arr,n,sum);

return 0;
}