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
 		ll int size=pow(2,n);
 		ll int arr[size];
 		for(ll int i=0;i<size;i++)
 		{
 			cin>>arr[i];
 		}
 		sort(arr,arr+size);
 		if(arr[size-1]-arr[0]>1)
 		{
 			cout<<"no\n";
 		}
 		else{
 			cout<<"yes\n";
 		}
 	}   
    return 0;
}