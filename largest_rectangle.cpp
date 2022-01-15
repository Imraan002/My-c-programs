#include<bits/stdc++.h>
using namespace std;
int largest_area_histogram(vector<int> & arr)
{
	vector<int> prev(arr.size());
	vector<int> next(arr.size());
	stack<int> st1,st2;
	for(int i=0;i<arr.size();i++)
	{
		while(!st1.empty() && arr[st1.top()]>=arr[i])
		{
			st1.pop();
		}
		if(st1.empty())
		{
			prev[i]=-1;
		}
		else{
			prev[i]=st1.top();
			
		}
		st1.push(i);
	}
	for(int i=arr.size()-1;i>=0;i--)
	{
		while(!st2.empty() && arr[st2.top()]>=arr[i])
		{
			st2.pop();
		}
		if(st2.empty())
		{
			next[i]=arr.size();
		}
		else{
			next[i]=st2.top();
			
		}
		st2.push(i);
	}
	int ans=INT_MIN;
	for(int i=0;i<arr.size();i++)
	{
		int temp=(next[i]-prev[i]-1)*arr[i];
		ans=max(ans,temp);
	}
	return ans;
}
int solve(vector<vector<int>> &arr)
{
	vector<int> row=arr[0];
	int ans=largest_area_histogram(row);
	for(int i=1;i<arr.size();i++)
	{
		for(int j=0;j<arr[i].size();j++)
		{
			if(arr[i][j]==1)
			{
				row[j]+=1;
			}
			else{
				row[j]=0;
			}
		}
		int temp=largest_area_histogram(row);
		ans=max(ans,temp);
	}
	return ans;
}
#define ll long long
int main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int rows,colums;
	cin>>rows>>colums;
	vector<vector<int>> arr(rows,vector<int>(colums));
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<colums;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<solve(arr);	   
	return 0;
}