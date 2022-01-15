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
    	multiset<char> st;
    	for(int i=0;i<str.size();i++)
    	{
    		st.insert(str[i]);
    	}
    	int sum(0);
    	int cnt=1;
    	for(auto i=st.begin();i!=st.end();i++)
    	{
    		sum+=(*i-'a'+1)*cnt;
    		cnt++;
    	}
    	cout<<sum<<"\n";
    }
    return 0;
}