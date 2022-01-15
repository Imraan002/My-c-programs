#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int ages[5];
for(int i=0;i<5;i++)
{
	cin>>ages[i];
}	
int min=*min_element(ages,ages+5);
float dis=(min*50.0)/100;
float amt=50.0-dis;
cout<<amt;
return 0;
}