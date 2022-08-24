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
    	int rate;
    	cin>>rate;
    	if(rate<=1399)
    	{
    		cout<<"Division 4"<<"\n";
    		continue;
    	}
    	else if(rate>=1400 && rate<=1599)
    	{
    		cout<<"Division 3"<<"\n";
    		continue;
    	}
    	else if(rate>=1600 && rate<=1899)
    	{
    		cout<<"Division 2"<<"\n";
    		continue;
    	}
    	else{
    		cout<<"Division 1"<<"\n";

    	}
    }
    return 0;
}