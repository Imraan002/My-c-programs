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
    int n,a,res;
    cin>>n>>a;
   res=sqrt(n);
   cout<<res*a<<endl;
}
    return 0;
}