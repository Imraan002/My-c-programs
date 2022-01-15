#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int T;
cin>>T;
while(T--)
{
	int n,want,rod;
	cin>>n>>want>>rod;
	int arr[n];
	int flag=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(rod>=want)
	{
		cout<<"YES"<<endl;
		continue;
	}
	else
	{
		
		sort(arr,arr+n);
		for(int i=0;i<n;i++)
		{
			if(arr[i]==arr[i+1])
			{
				rod=rod+2*arr[i];
				i++;
			}
			if(rod>=want)
			{
				flag=1;
				break;
			}
		}
		
	}
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

return 0;
}