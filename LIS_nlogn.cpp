#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n;

int arr[100001];

vector<int> LIS;

vector<int> inserted_at(10000);
vector<int> ans;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    cin>>n;

    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
    	if(LIS.empty() || arr[i]>LIS.back())
    	{
    		LIS.push_back(arr[i]);

    		inserted_at[i] = LIS.size();
    	}
    	else{
    		auto it = lower_bound(LIS.begin(),LIS.end(),arr[i]);		//checking the element just greater than or equal to arr[i]
    		*it = arr[i];

    		inserted_at[i] = it-LIS.begin()+1;
    	}
    }

    int curr_level = LIS.size();

    for(int i=n-1;i>=0;i--)
    {
    	if(inserted_at[i]==curr_level)
    	{
    		ans.push_back(arr[i]);
    		curr_level--;
    	}
    }
    reverse(ans.begin(),ans.end());
    
    for(auto ele:ans)
    {
    	cout<<ele<<" ";
    }
    return 0;
}