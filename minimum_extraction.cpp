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
   ll int t;
    cin>>t;
    while(t--)
    {
    	
    	ll int n;
    	cin>>n;
    	priority_queue<ll int,vector<ll int>,greater<ll int>> pq;
    	for(ll int i=0;i<n;i++)
    	{
    		ll int k;
            cin>>k;
    		pq.push(k);
    	}
    ll int curr=0;
    ll int ans=INT_MIN;
        while(pq.size()>=1)
        {
           ll int temp=pq.top();
            pq.pop();
          
            temp=temp-curr;
        
            ans=max(ans,temp);
           
            curr+=temp;
        }
       
    	cout<<ans<<"\n";
    }
    return 0;
}