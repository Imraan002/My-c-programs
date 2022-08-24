#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long long mod=1e9+7;
int Dearrangement[1000009];
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll int n;
    cin>>n;

    

    Dearrangement[0]=1;

    Dearrangement[1]=0;

    for(int i=2;i<1000009;i++)
    {
    	Dearrangement[i] = ((i-1)*(Dearrangement[i-1]%mod+Dearrangement[i-2]%mod))%mod;
    }
    cout<<Dearrangement[n]%mod<<"\n"; 
    return 0;
}