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
    getline(cin,str);
    for(auto k:str)
    {
    	if(k==' ')
    		continue;
    	mp[k]++;
    }

    string query;
    getline(cin,query);
    bool ans=true;
   	for(auto k:query)
   	{
   		if(k==' ')
   			continue;
   		if(mp[k]==0)
   		{
   			ans=false;
   			break;
   		}
   		mp[k]--;
   	}
   	if(ans==0)
   		cout<<"NO\n";
   	else
   		cout<<"YES\n";
    return 0;
}