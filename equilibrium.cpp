#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool equilibrium(int arr[1000][3],int n)
{
	int sum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum+=arr[j][i];
		}
		if(sum!=0)
			return false;
	}
	return true;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<3;j++)
    	{
    		cin>>arr[i][j];
    	}
    }
   if(equilibrium(arr,n)==true)
   		cout<<"YES\n";
   	else
   		cout<<"NO\n";
    return 0;
}