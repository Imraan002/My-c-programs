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
    	int ans=0;
    	int a,b,c,d;
    	cin>>a>>b>>c>>d;
    	 ans=max(ans,a);
    	 ans=max(ans,b);
    	 ans=max(ans,c);
    	 ans=max(ans,d);
    	cout<<ans<<"\n";
    }
    return 0;
}