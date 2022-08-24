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
    	ll int n;
    	cin>>n;

    	string str=to_string(n);

    	ll int ans=n-pow(10,str.size()-1);
    	cout<<ans<<"\n";
    }
    return 0;
}