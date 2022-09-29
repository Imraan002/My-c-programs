#include<bits/stdc++.h>
using namespace std;
#define int long long

int arr[103][103];

int kadane(vector<int> &arr)
{
	int sum=0;

	int k=-1e9;

	for(int i=0;i<arr.size();i++)
	{
		sum+=arr[i];

		k=max(k,sum);

		if(sum<0)
		{
			sum=0;
		}

	}
	return k;
}
void solve()
{
	int row,col;
	cin>>row>>col;

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	int res=-1e9;

	for(int col_start = 0; col_start<col ; col_start++)
	{
		vector<int> temp(row,0);
		for(int col_end = col_start; col_end<col; col_end++)
		{
			for(int k=0;k<row;k++)
			{
				temp[k]+=arr[k][col_end];
				
			}
			int temp_ans = kadane(temp);

			res=max(res,temp_ans);
		}
		
	}
	cout<<res;
	
}



signed main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    
	int t;
	cin >> t;


	while(t--)
	{
		solve();
	}
	return 0;
}
