#include <bits/stdc++.h>
using namespace std;
int matrix[1001][1001];

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
for(int i=1;i<1001;i++)
{
	matrix[i][1]=(i*(i+1))/2;
	for(int j=2;j<1001;j++)
	{
		matrix[i][j]=matrix[i][j-1]+j-1+i-1;
	}
}
int T;
cin>>T;
while(T--)
{
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	int sum=0;
	for(int i=x1;i<=x2;i++)
	{
		sum+=matrix[i][y1];
	}
	for(int i=y1+1;i<=y2;i++)
	{
		sum+=matrix[x2][i];
	}
	cout<<sum<<endl;
}
return 0;
}