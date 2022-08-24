#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int row;
    cin>>row;

    vector<vector<int>> arr(row+1,vector<int>(row+1,0));
    for(int i=1;i<=row;i++)
    {
    	for(int j=1;j<=i;j++)
    	{
    		
    		if(j==1 || j==i)
    			arr[i][j]=1;
    		else
    			arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
    	}
    }
    vector<vector<int>> ans;
    for(auto k:arr)
    {
    	vector<int>temp;
    	for(auto t:k)
    	{
    		if(t==0)continue;
    		else
    		 	temp.push_back(t);
    	}
    	if(temp.size()>0)
    		ans.push_back(temp);
    	   }
   	for(auto k:ans)
   	{
   		for(auto t:k)
   		{
   			cout<<t<<" ";
   		}
   		cout<<"\n";
   	}
    return 0;
}