#include <bits/stdc++.h>
using namespace std;
void print_binary(int n)
{
	for(int i=10;i>=0;i--)
	{
		cout<<((n>>i)&1);
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
print_binary(n);
cout<<endl;
if(n&1)
	cout<<"odd"<<endl;
else
	cout<<"even"<<endl;
if(n&(n-1))
	cout<<"not power of two"<<endl;
else
	cout<<"power of two"<<endl;
char d='A'|(1<<5);
cout<<d<<endl;
char ab='z';
char k='z'&~(1<<5);
cout<<k<<endl;
print_binary(31);
int bit=2;
int sol=31&((1<<bit)-1);			//unsetting from bits to msb
cout<<endl;
print_binary(sol);
cout<<endl;
int ans=31&(1<<bit+1);				//unsetting from bits to lsb
print_binary(ans);
return 0;
}