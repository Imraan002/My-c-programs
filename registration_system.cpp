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
    int n;
    cin>>n;
    map<string,int> mp;
    for(int i=0;i<n;i++)
    {
    	string str;
    	cin>>str;
    	if(mp.find(str)==mp.end())
    	{
    		cout<<"OK"<<"\n";
    	}
    	else{
    		cout<<str<<mp[str]<<"\n";
    	}
    	mp[str]++;
    }
    return 0;
}