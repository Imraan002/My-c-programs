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
    	int n,k;
    	cin>>n>>k;
    	string str;
    	cin>>str;
    	int cnt=0;
    	for(int i=1;i<str.size();i++)
    	{
    		if(str[i]!=str[i-1])
    		{
    			cnt++;
    			
    		}
    	}
    	if(cnt<k)
    	{
    		cout<<-1<<endl;
    		continue;
    	}
    	else{
    		int i=0;
    		int j=str.size()-1;
    		int ans=-1;
    		while(k && i<=j )
    		{
    			while(str[j]==str[i])
    			{
    				j--;
    			}
    			if(i==0)
    			{
    				ans+=(j-(i-1));
    				ans++;
    				
    			}
    			else
    			{
    				ans+=j-i;
    				
    			}
    			k--;
    			i=j;
    			j=str.size()-1;
    		}
    		
    		if(k)
    		{
    			ans=-1;
    		}
    		cout<<ans<<endl;
    	}

    }
    return 0;
}