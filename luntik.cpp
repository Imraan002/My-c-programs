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
    	ll int a,b,c;
    	cin>>a>>b>>c;
    	ll int temp1=a%2;
    	ll int temp2=b%2;
    	ll int temp3=c%2;
    	if((temp1==0 && temp2==0 && temp3==0) || (temp1==1 && temp2==1 && temp3==1))
    	{
    		cout<<0<<"\n";
    	}
    	else if(temp1==0 && temp2==0 && temp3==1)
    	{
    		cout<<1<<"\n";
    	}
    	else if(temp1==0 && temp2==1 && temp3==0)
    	{
    		cout<<0<<"\n";
    	}
    	else if(temp1==0 && temp2==1 && temp3==1)
    	{
    		cout<<1<<"\n";
    	}
    	else if(temp1==1 && temp2==0 && temp3==0)
    	{
    		cout<<1<<"\n";
    	}
    	else if(temp1==1 && temp2==0 && temp3==1)
    	{
    		cout<<0<<"\n";
    	}
    	else if(temp1==1 && temp2==1 && temp3==0)
    	{
    		cout<<1<<"\n";
    	}
    }
    return 0;
}