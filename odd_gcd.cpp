#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int odd_cnt(ll int num)
{
    ll int cnt(0);
    while(num%2==0)
    {
        cnt++;
        num=num/2;
    }
    return cnt;
}
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
    	ll int arr[n];
    	for(ll int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	ll int gcd(0);
    	for(ll int i=0;i<n-1;i++)
    	{
    		gcd=__gcd(arr[i],arr[i+1]);
    	}
    	if(gcd%2!=0)
    	{
    		cout<<0<<endl;
    		continue;
    	}
    	ll int cnt=INT_MAX;
        for(ll int i=0;i<n;i++)
        {
            cnt=min(cnt,odd_cnt(arr[i]));
        }
        cout<<cnt<<endl;

       
    }
    return 0;
}