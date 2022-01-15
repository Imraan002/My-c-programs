#include <bits/stdc++.h>
using namespace std;
const int N=100;
int dp[N][N][N];
int lcs(int arr[],int brr[],int i,int j,int k,int n,int m)
{
	int c1=0;
	int c2=0;
	int c3=0;
	if(i==n || j==m)
		return 0;
	if(dp[i][j][k]!=-1)
		return dp[i][j][k];
	if(arr[i]==brr[j])
	 c1=1+lcs(arr,brr,i+1,j+1,k,n,m);
	if(k>0)
	 c2=1+lcs(arr,brr,i+1,j+1,k-1,n,m);
	 c3=max(lcs(arr,brr,i+1,j,k,n,m),lcs(arr,brr,i,j+1,k,n,m));
	return dp[i][j][k]=max({c1,c2,c3});
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
int m;
cin>>m;
int brr[m];
for(int i=0;i<m;i++)
{
	cin>>brr[i];
}
int k;
cin>>k;
memset(dp,-1,sizeof(dp));
cout<<lcs(arr,brr,0,0,k,n,m);

return 0;
}