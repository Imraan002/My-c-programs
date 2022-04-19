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
    
    ll int a,b,c;
    cin>>a>>b>>c;
    string ans="";
    bool flg=true;
    if(a%b==0)
    {
    	ans+=to_string(a);
    	for(int i=0;i<c;i++)
    	{
    		ans+='0';
    	}
    }
    else{
    	ans+=to_string(a);
    	int i=0;
    	for( i=0;i<=9;i++)
    	{
    		if((a*10+i)%b==0)
    		{
    			ans+=to_string(i);
    			flg=false;
    			break;
    		}
    	}
    	for(i;i<c;i++)
    	{
    		ans+='0';
    	}

    }
    if(flg==true)
    	cout<<-1<<"\n";
    else
    	cout<<ans<<"\n";
    return 0;
}