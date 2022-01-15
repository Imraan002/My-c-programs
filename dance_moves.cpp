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
    	int x,y;
    	cin>>x>>y;
    	int ans=0;
    	int i=x;
        while(i<y)
        {
            i=i+2;
            ans++;
        }
        if(i!=y)
        {
            ans+=i-y;
        }
    
        cout<<ans<<"\n";
    }
    return 0;
}