#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<string,int> mp;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
    	string str;
    	cin>>str;
    	mp[str]++;
    }
    string ans;
    int t=0;
    for(auto k:mp)
    {
    	if(k.second>t)
    	{
    		ans=k.first;
    		t=k.second;
    	}
    }
    cout<<ans<<"\n";
    return 0;
}