#include<bits/stdc++.h>
using namespace std;
#define ll long long
int typeable[26];

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    for(int i=0;i<k;i++)
    {
    	char ch;
    	cin>>ch;
    	typeable[ch-'a']=1;
    }
    int dp[n+1];
   for(int i=0;i<=n;i++)
   {
   		dp[i]=0;
   }
   
   ll int ans=0;

    for(int i=0;i<n;i++)
    {
    	if(typeable[str[i]-'a'])
    	{
    		dp[i+1]=dp[i+1-1]+1;
    	}
    	else
    	{
    		dp[i+1]=0;
    	}
    	ans+=dp[i+1];
    }
    cout<<ans<<"\n";

    return 0;
}