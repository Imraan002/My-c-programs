#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> mult(vector<vector<int>> a,vector<vector<int>> b )
{
	int size=a.size();
	vector<vector<int>> ans(size,vector<int>(size,0));
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			for(int k=0;k<size;k++)
			{
				ans[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	return ans;

}
vector<vector<int>>matrixExpo(vector<vector<int>> &a,int n)
{
	int size=a.size();
	if(n==0)
	{
		vector<vector<int>> res(size,vector<int>(size,0));
		for(int i=0;i<size;i++)
		{															//matrixExponentiation
			res[i][i]=1;
		}
		return res;
	}
	if(n==1)
		return a;
	vector<vector<int>> temp=matrixExpo(a,n/2);
	vector<vector<int>> ans=mult(temp,temp);
	if(n%2!=0)
	{
		ans=mult(ans,a);
	}
	return ans;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
vector<vector<int>> a={{1,1,1},{0,1,1},{0,1,0}};
vector<vector<int>> ans=matrixExpo(a,n);
for(int i=0;i<ans.size();i++)
{
	for(int j=0;j<ans.size();j++)
	{
		cout<<ans[i][j]<<" ";
	}
	cout<<endl;
}
cout<<"The sum upto "<<n<<" fib is "<<ans[0][2];
return 0;
}