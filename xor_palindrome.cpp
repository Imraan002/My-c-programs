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
    	int n;
    	cin>>n;

    	string str;
    	cin>>str;

    	int ans=0;
    	string k = str;
    	reverse(k.begin(),k.end());
    	if((k==str))
    	{
    		ans=0;
    	}
    	else{
    		int cnt=0;
    		int i=0;
    		int j=n-1;
    		while(i<j)
    		{
    			if(str[i]!=str[j])
    			{
    				cnt++;
    			}
    			i++;
    			j--;
    		}
    		
    		ans=ceil((cnt+0.0)/(2+0.0));
    	}
    	cout<<ans<<"\n";
    }
    return 0;
}