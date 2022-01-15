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
    	int x,y;
    	cin>>x>>y;
    	string str;
    	cin>>str;
    	int ones=0;
    	int max_streak=INT_MIN;
    	int temp=0;
    	for(int i=0;i<str.size();i++)
    	{
    		
    		if(str[i]=='1')
    		{
    			ones++;
    			temp++;
    		}
    		else{
    			max_streak=max(max_streak,temp);
    			temp=0;
    		}
    	}
    	max_streak=max(max_streak,temp);
    	cout<<ones*x+y*max_streak<<"\n";

    }
    return 0;
}