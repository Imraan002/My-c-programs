#include<bits/stdc++.h>
using namespace std;
#define ll long long

map<char,int> mp;
 int lengthOfLongestSubstring(string s) {
        
        
        
        int len=0;
        
        int low=0;
        int high=0;
        
        while(high<s.size())
        {
            if(mp.count(s[high]))
            {
                low = max(low,mp[s[high]]+1);
            }
            
                mp[s[high]]=high;

                len = max(len,high-low+1);
               
                high++;
                
            
        }
        return len;
    }
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string str;
    cin>>str;
    int ans=lengthOfLongestSubstring(str);
    cout<<ans;

    // for(auto k:mp)
    // {
    // 	cout<<k.first<<" "<<k.second<<"\n";
    // }
    return 0;
}