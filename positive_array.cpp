#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
   int n;
   cin>>n;
   
   int arr[n+1];

   for(int i=1;i<n+1;i++)
   {
        cin>>arr[i];
   }

   sort(arr+1,arr+n+1);

   priority_queue<int,vector<int>,greater<int>> pq;             //sorts in ascending order

   pq.push(1);

   for(int i=1;i<n+1;i++)
   {
        if(arr[i] >= pq.top() )         /*checking the min index available in pq as min 
                                            index will always be on top*/ 
        {
            int new_idx = pq.top()+1;    
            pq.pop();
            pq.push(new_idx);
        }
        else{
            pq.push(2);
        }
   }
   cout<<pq.size()<<"\n";
}
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}