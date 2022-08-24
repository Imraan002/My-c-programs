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

    	set<char> st;

    	int ans=2;

    	st.insert(str[0]);

    	for(int i=1;i<str.size();i++)
    	{
    		if(st.find(str[i])==st.end())
    		{
    			ans+=2;
    			st.insert(str[i]);
    		}
    		else{
    			ans+=1;   			
    		}
    	}
    	cout<<ans<<"\n";
    }
    return 0;
}