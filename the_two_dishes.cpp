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
    	int n,sum;
    	cin>>n>>sum;
    	if(n>sum)
    	{
    		cout<<abs(0-sum)<<endl;
    		continue;
    	}
    	else if(n==sum)
    	{
    		cout<<sum<<endl;
    		continue;
    	}
    	else{
    		cout<<abs(n-abs(n-sum))<<endl;
    	}
    }
    return 0;
}