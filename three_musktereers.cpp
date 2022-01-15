#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isvowel(char ch)
{
	return ((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'));
}
vector<string> find_subsets(string str)
{
	vector<string> temp;
	for(int mask=0;mask<(1<<str.size());mask++)
	{
		string temp_ans;
		for(int bit=0;bit<str.size();bit++)
		{
			if(mask&(1<<bit))
			{
				temp_ans.push_back(str[bit]);
			}
		}
		if(temp_ans.size())
			temp.push_back(temp_ans);
	}
	return temp;
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
    	string str[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>str[i];
    	}
    	unordered_map<string,int> mp;
    	for(int i=0;i<n;i++)
    	{
    		set<char> st;
    		for(auto ch:str[i])
    		{
    			if(isvowel(ch))
    			{
    				st.insert(ch);
    			}
    		}
    		string temp;
    		while(!st.empty())
    		{
    			temp.push_back(*st.begin());
    			st.erase(st.begin());
    		}
    		vector<string> permutations=find_subsets(temp);
    		for(auto k:permutations)
    		{
    			mp[k]++;
    		}
    	}
    	ll int ans=0;
    	for(auto k:mp)
    	{
    		if(k.second<3)
    			continue;
    		ll int cnt=k.second;
    		ll int ways=cnt*(cnt-1)*(cnt-2)/6;
    		if(k.first.size()%2==0)
    		{
    			ans=ans-ways;
    		}
    		else{
    			ans+=ways;
    		}
    	}
    	cout<<ans<<"\n";
    }
    return 0;
}