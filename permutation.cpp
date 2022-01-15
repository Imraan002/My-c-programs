#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution{
    public:
    vector<string> temp;
    void helper(string &str,int l,int r)
    {
        if(l==r)
        {
            temp.push_back(str);
            return;
        }
        for(int i=l;i<=r;i++)
        {
            swap(str[l],str[i]);
            helper(str,l+1,r);
            swap(str[l],str[i]);
        }
        
    
    }
    vector<string> find_permutation(string &s)
    {
        helper(s,0,s.size()-1);
        return temp;
    }
};
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}