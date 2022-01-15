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
    	if(n==1)
    		{
    			cout<<1<<"\n";
    			continue;
    		}
    	else if(n==2)
    	{
    		cout<<2<<"\n";
    		continue;
    	}
    	else{
    		if(n&(n-1)==0)
    			{
    				int ans=(int)log2(n)+1;
    				cout<<(1<<ans)-1<<"\n";
    				continue;
    			}
    			else{
    				int ans=(int)log2(n)+1;
    				cout<<(1<<ans)<<"\n";
    				continue;
    			}
    	}
    }
    return 0;
}