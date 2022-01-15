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
    	bool ans=false;
    	string str;
    	cin>>str;
    	for(int i=0;i<str.size();i++)
    	{
    		if(i<=str.size()-1 && str[i]==str[i+1])
    		{
    			ans=true;
    			break;
    		}

    	}
    	if(ans)
    	{
    		cout<<"YES\n";
    	}
    	else
    	{
    		cout<<"NO\n";
    	}
    }
    return 0;
}