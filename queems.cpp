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
		char arr[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				arr[i][j]='.';
			}


		}
		int cnt=n-2;
		int i(1),j(n-2);
		while(cnt>0)
		{
			arr[i][j]='Q';
			i++;
			j--;
			cnt--;
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<arr[i][j];
			}
			cout<<"\n";
		}
		cout<<"\n";

	}   
	return 0;
}