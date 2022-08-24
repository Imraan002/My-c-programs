
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll int N=1e5+10;
ll int prefix[N];
ll int prefix_ques[N];
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll int n;
    cin>>n;
    ll int arr[n+1];
    arr[0]=0;
    for(int i=1;i<n+1;i++)
    {
    	cin>>arr[i];
    	prefix[i]=prefix[i-1]+arr[i];
    }

    vector<ll int> qrr(arr,arr+n+1);
    sort(qrr.begin(),qrr.end());
    
    for(int i=1;i<n+1;i++)
    {
    	prefix_ques[i]=prefix_ques[i-1]+qrr[i];
    }
    ll int m;
    cin>>m;

    for(int i=0;i<m;i++)
    {
    	int t;
    	cin>>t;
    	if(t==1)
    	{
    		int l,r;
    		cin>>l>>r;
    		cout<<prefix[r]-prefix[l-1]<<"\n";
    	}
    	else{
    		int l,r;
    		cin>>l>>r;
    		cout<<prefix_ques[r]-prefix_ques[l-1]<<"\n";
    	}
    }



    return 0;
}