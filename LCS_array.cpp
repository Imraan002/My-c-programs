#include<bits/stdc++.h>
using namespace std;
#define ll long long

map<int,int> mp;
int longestConsecutive(vector<int> &nums) {
        
        
        
        int ans=0;
        for(auto k:nums)
        {
            mp[k]++;
        }
        
        int prev=INT_MIN;
        
        int res=0;
        for(auto k:mp)
        {
            if(prev==INT_MIN)
            {
                ans++;
                prev=k.first;
                res=max(res,ans);
            }
            else if(prev!=INT_MIN){
                
                if(abs(k.first-prev)==1)
                {
                    ans++;
                    prev=k.first;
                    res=max(res,ans);
                }else {
                    ans=1;
                    prev=k.first;
                   
                }
            }
        }
        return res;
    }
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    vector<int> arr={9,1,4,7,3,-1,0,5,8,-1,6};

    int ans = longestConsecutive(arr);

    for(auto k:mp)
    {
    	cout<<k.first<<" "<<k.second<<"\n";
    }
   cout<<ans;
    return 0;
}