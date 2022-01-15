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
    	string str;
    	cin>>str;
    	int a_cnt(0),b_cnt(0),c_cnt(0);
    	for(int i=0;i<str.length();i++)
    	{
    		if(str[i]=='A')
    			a_cnt++;
    		else if(str[i]=='B')
    			b_cnt++;
    		else
    			c_cnt++;
    	}
    	int res=a_cnt+c_cnt;
    	if(res==b_cnt)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    	
    }
    return 0;
}