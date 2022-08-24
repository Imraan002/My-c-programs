#include<bits/stdc++.h>
using namespace std;
#define ll long long
 int maxLen(vector<int>&A, int n)
    {   
        int sum=0;
        
        map<int,int> mp;
        
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            
            if(sum==0)
            {
                maxi=i+1;
                cout<<i<<"\n";
            }
            else if(mp.find(sum)!=mp.end()){
                cout<<i<<" "<<mp[sum]<<"\n";
                maxi=max(maxi,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
           
        }
        return maxi;
    }
    
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    vector<int> arr = {619, 847, 922, 380, -763, -840, -192, -33};

   int ans= maxLen(arr,8);
    
   cout<<ans;

   
    return 0;
}