#include <bits/stdc++.h>
using namespace std;
void binary(int num)
{
	for(int i=10;i>=0;i--)
	{
		int k=(num>>i)&1;
		cout<<k;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
binary(n);
cout<<endl;
int bit;
cin>>bit;
int res=(1<<bit)&n;
if(res==0)						//check if bit is set or not
	cout<<"not set";
else
	cout<<"set";
cout<<endl;
int res1=n|(1<<bit);			//seting a bit
binary(res1);
cout<<endl;
int res2=n&~(1<<bit);			//unsetting a bit
binary(res2);
cout<<endl;
int res3=n^(1<<bit);
binary(res3);
cout<<endl;						//toggling ith bit
int cnt=0;
for(int i=31;i>=0;i--)
{
	if((n>>i)&1==1)
		cnt++;
}
cout<<"No of set bits "<<cnt<<endl;
cout<<"No of set bits "<<__builtin_popcount(n)<<endl;
cout<<"No of set bits "<<__builtin_popcountll(n)<<endl;
return 0;
}