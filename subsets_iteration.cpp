#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> solve(vector<int> arr)
{
	vector<vector<int>> ans;
	vector<int> temp;
	ans.push_back(temp);
	for(auto num:arr)
	{
		int n=ans.size();
		for(int i=0;i<n;i++)
		{
			vector<int> temp2=ans[i];
			temp2.push_back(num);
			ans.push_back(temp2);
		}
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
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    vector<vector<int>> res=solve(arr);
    for(auto k:res)
    {
    	for(auto t:k)
    	{
    		cout<<t<<" ";
    	}
    	cout<<"\n";
    }
    return 0;
}