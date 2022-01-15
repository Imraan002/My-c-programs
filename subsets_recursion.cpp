#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<string> solve(string str,string p)
{
	vector<string> ans;
	if(str.size()==0)
	{
		ans.push_back(p);
		return ans;
	}
	vector<string> left=solve(str.substr(1),p+str[0]);
	vector<string> right=solve(str.substr(1),p);

	for(auto k:right)
	{
		left.push_back(k);
	}
	return left;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string str;
    cin>>str;
    vector<string> res=solve(str,"");
    for(auto k:res)
    {
    	cout<<k<<"\n";
    }
    return 0;
}