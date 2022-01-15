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
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
       for(int i=1;i<=n;i++)
       {
        if(i==1 || i==n)
        {
            cout<<3;
        }
        else{
            cout<<0;
        }
        
       }
       cout<<endl;

   }
      
    return 0;
}
    