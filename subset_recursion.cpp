#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<string> find_subset(string str)
{
	vector<string> temp;
	vector<string> final_ans;
	if(str=="")
	{
		final_ans.push_back("");
		return final_ans;					//subset generation using recursion
	}
	temp=find_subset(str.substr(1));
	
	for(auto k:temp)
	{
		final_ans.push_back(k);
	}
	for(auto k:temp)
	{
		final_ans.push_back(str[0]+k);
	}
	return final_ans;
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
    vector<string> ans=find_subset(str);
    for(auto k:ans)
    {
    	cout<<k<<"\n";
    }
    return 0;
}