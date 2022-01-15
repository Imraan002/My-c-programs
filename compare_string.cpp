#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool lexo_small(string a,string b)
{
	if(a.size()==1 && b.size()==1)
	{
		return int(a[0])<int(b[0]);
	}
	int i=0;
	int j=0;
	while(i<a.size() || j<b.size())
	{
		if(int(a[i])>int(b[i]))
		{
			return false;
		}
		i++;
		j++;
	}
	return true;
}
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
    	string a,b;
    	cin>>a>>b;
    	int ans=0;
    	for(int i=0;i<a.size();i++)
    	{
    		if(lexo_small(a.substr(i),b.substr(i))==true)
    		{
    			ans++;
    		}
    	}
    	cout<<ans<<"\n";
    }

    return 0;
}