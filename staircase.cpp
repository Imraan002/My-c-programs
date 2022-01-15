#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
int arr[N];

int staircase(int n)
{
	arr[0]=1;
	arr[1]=1;
	arr[2]=2;
	for(int i=3;i<=n;i++)				//tabulation
	{
		arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
	}
	return arr[n];
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
cout<<staircase(n);	
return 0;
}