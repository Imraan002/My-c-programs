#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<string>permute_ways(vector<vector<int>> &arr,int r,int c)
{
	vector<string> myans;
    vector<string> temp1,temp2;
    if(r==arr.size()-1 && c==arr[0].size()-1)
    {
        
        myans.push_back("");
        return myans;
    }
    if(r<arr.size()-1)
    {
         temp1=permute_ways(arr,r+1,c);
        for(auto k:temp1)
        {
            myans.push_back('D'+k);
        }

    }
    if(c<arr[0].size()-1)
    {
       temp2=permute_ways(arr,r,c+1);
        for(auto k:temp2)
        {
            myans.push_back('R'+k);
        }
    }
   
    return myans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    vector<vector<int>> arr={{1,1,1},
    			   	         {1,1,1},
    			             {1,1,1}
    				        };
    vector<string> ans=permute_ways(arr,0,0);
    for(auto k:ans)
    {
        cout<<k<<"\n";
    }
    return 0;
}