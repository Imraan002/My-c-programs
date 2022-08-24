#include<bits/stdc++.h>
using namespace std;
#define ll long long

int dp[102][100009];
int solve(vector<int> &arr,int idx,int target)
{
		if(target<0)
			return 0;

		if(target==0)
			return 1;

		if(idx==arr.size())
		{
			if(target==0)
				return 1;
			else
				return 0;
		}
		if(dp[idx][target]!=-1)
			return dp[idx][target];
		int ans=0;

		if(solve(arr,idx+1,target))
		{
			ans=1;
		}
		else if(solve(arr,idx+1,target-arr[idx]))
		{
			ans=1;
		}

		return dp[idx][target]=ans;
}
vector<int> print_subset(vector<int> &arr,int idx,int target)
{
	vector<int> ans;

	if(idx==arr.size())
	{
		if(target==0)
		{
			return ans;
		}
	}
	if(solve(arr,idx+1,target))
	{
		ans=print_subset(arr,idx+1,target);
	}
	else if(solve(arr,idx+1,target-arr[idx]))
	{
		
		ans=print_subset(arr,idx+1,target-arr[idx]);
		ans.push_back(idx);
	}
	return ans;
}
vector<vector<int>> subset_queries(vector<int> &arr, vector<int> &queries) 
{
		memset(dp,-1,sizeof(dp));

		vector<vector<int>> ans;
		for(int i=0;i<queries.size();i++)
		{
			if(solve(arr,0,queries[i]))
			{
				vector<int>temp=(print_subset(arr,0,queries[i]));
				sort(temp.begin(),temp.end());
				ans.push_back(temp);
			}
			else
				ans.push_back({-1});
		}
		return ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    vector<int> arr={1,2,3,4,5};

    vector<int> queries={7,16,3};

    vector<vector<int>> ans = subset_queries(arr,queries);

    for(auto arr:ans)
    {
    	for(auto ele:arr)
    	{
    		cout<<ele<<" ";
    	}
    	cout<<"\n";
    }
    return 0;
}