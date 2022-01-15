#include <bits/stdc++.h>
using namespace std;
bool ispalin(int num)
{
	int sum=0;
	int temp=num;
	while(temp!=0)
	{
		int rem=temp%10;
		sum=sum*10+rem;
		temp=temp/10;
	}
	if(sum==num)
		return true;
	return false;

}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
cout<<ispalin(n);
return 0;
}