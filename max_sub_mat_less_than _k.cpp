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
	int row,col,k;
	cin>>row>>col>>k;

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	//int res=-1e9;

	int final_ans=0;
	
	for(int col_start = 0; col_start<col ; col_start++)
	{
		vector<int> temp(row,0);

		int sub_matrix_size=0;
		for(int col_end = col_start; col_end<col; col_end++)
		{
			for(int k=0;k<row;k++)
			{
				temp[k]+=arr[k][col_end];
				
			}
			sub_matrix_size+=row;
			int temp_ans = kadane(temp);

			if(temp_ans<=k)
			{
				//res=max(res,temp_ans);
				final_ans=max(final_ans,sub_matrix_size);

			}
		}
		
	}
	cout<<final_ans<<"\n";
	
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
