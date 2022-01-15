#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
 int arr[n];
 long int sum=0;
 for(int i=0;i<n;i++)
 {
 	cin>>arr[i];
 	sum=(sum+arr[i]+M)%M;
 }

int q;
cin>>q;
while(q--)
{
	int k;
	cin>>k;
	sum=(sum*2)%M;
	cout<<sum<<endl;

}

	
return 0;
}