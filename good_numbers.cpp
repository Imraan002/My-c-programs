#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> binary(int n)
{
	vector<int> ans;
	 for (int i = 0; i < (int)log2(n)+1; i++) {
        if(n&(1<<i))
        	ans.push_back(1);
        else
        	ans.push_back(0);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
bool is_palindrome(vector<int> &num)
{
	bool check=true;
	int i=0;
	int j=num.size()-1;
	while(i<j)
	{
		if(num[i]!=num[j])
		{
			check=false;
			break;
		}
		i++;
		j--;
	}
	return check;
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
    	vector<int> ans=binary(n);
    	vector<int> good_num(n);
    	for(int i=1;i<n;i++)
    	{
    		vector<int> temp=binary(i);
    		if(is_palindrome(temp))
    		{
    			good_num[i]=i;
    		}
    	}
    	int final_ans[12];
    	map<int,int> mp;
    	for(auto i=good_num.begin();i!=good_num.end();i++)
    	{
    		if((*i)!=0)
    		{
    			mp[*i]++;
    		}
    	}
    	
    	// for(auto k:mp)
    	// {
    	// 	cout<<k.first<<" ";
    	// }
    	// cout<<"\n";

    }
    return 0;
}