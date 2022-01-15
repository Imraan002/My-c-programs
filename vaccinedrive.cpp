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
	int g,p;
	cin>>g>>p;
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	int beforechef=0;
	for(int i=g;i<10;i++)
	{
		beforechef+=arr[i];
	}

	cout<<((beforechef+1)+(p-1))/p<<" "<<((beforechef+arr[g-1])+(p-1))/p<<endl;
}
return 0;
}