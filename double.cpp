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

    	int res[n];

    	set<string> st;

    	vector<string> v(n);
    	for(int i=0;i<n;i++)
    	{
    		string str;
    		cin>>str;
    		v[i]=str;
    		st.insert(str);
    	}

    	for(int i=0;i<n;i++)
    	{
    		bool flag=false;
    		for(int j=0;j<v[i].size()-1;j++)
    		{
    			if(st.find(v[i].substr(0,j+1))!=st.end() && st.find(v[i].substr(j+1))!=st.end()){
    				flag=true;
    				break;
    			}
    		}
    		if(flag)
    			res[i]=1;
    		else
    			res[i]=0;
    	}
    	for(int i=0;i<n;i++)
    	{
    		cout<<res[i];
    	}
    	cout<<"\n";


    }
    return 0;
}