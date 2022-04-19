#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<char,int> mp;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    string str;
    cin>>str;

    for(auto k:str)
    {
    	mp[k]++;
    }
    int ans=0;
    for(auto k:mp)
    {
    	if(k.second%2!=0)
    	{
    		ans++;
    	}
    }
    if(ans<=0)
    {
    	cout<<"First\n";
    }
    else if(ans%2==0)
    {
    	cout<<"Second\n";
    }
    else
    {
    	cout<<"First\n";
    }
    return 0;
}