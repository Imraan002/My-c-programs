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
    ll int l,r;
    cin>>l>>r;
    cout<<r/3-(l-1)/3<<"\n";
 }   
    return 0;
}