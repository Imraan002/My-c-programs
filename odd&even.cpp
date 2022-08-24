#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		bool ans=true;
		if(arr[0]%2==0)
		{
			for(int i=1;i<n;i=i+2)
			{
				if(arr[i]%2!=0)
				{
					ans=false;
					break;
				}
			}
		}
		else{


			for(int i=1;i<n;i=i+2)
			{
				if(arr[i]%2==0)
				{
					ans=false;
					break;
				}
			}
		}
		if(ans==true)
		{
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}

	}
	return 0;
}