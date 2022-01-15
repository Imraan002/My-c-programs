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
        ll int arr[7];
        for(ll int i=0;i<7;i++)
        {
            cin>>arr[i];
        }
        cout<<arr[0]<<" ";
        cout<<arr[1]<<" ";
        cout<<arr[6]-(arr[0]+arr[1])<<"\n";

    }
    return 0;
}