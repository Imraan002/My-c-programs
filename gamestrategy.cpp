#include <bits/stdc++.h>
using namespace std;
int gamestrategy(int arr[],int i,int j)
{
	if(i>j)
		return 0;
	if(i==j)
		return arr[i];
	int l=arr[i]+min(gamestrategy(arr,i+2,j),gamestrategy(arr,i+1,j-1));
	int r=arr[j]+min(gamestrategy(arr,i+1,j-1),gamestrategy(arr,i,j-2));
	return max(l,r);
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;							//even number 
cin>>n;   
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}        
cout<<gamestrategy(arr,0,n-1);
return 0;
}