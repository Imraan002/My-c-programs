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
 ll int t;
 cin>>t;
 while(t--)
 {
 	string str,word;
 	cin>>str>>word;
 	map<char,int> mp;
 	for(int i=0;i<26;i++)
 	{
 		mp[str[i]]=i+1;
 	}
 	ll int ans(0);
 	for(int i=0;i<word.size()-1;i++)
 	{
 		ans+=abs(mp[word[i]]-mp[word[i+1]]);
 	}
 	cout<<ans<<"\n";

 }   
    return 0;
}