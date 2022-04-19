#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<string,int> mp;
class Solution {
public:
 bool find_palindrome(string str)
{
	
	if(mp[str]==1)
		return true;
	if(str.length()==1)
		{
			mp[str]=1;
			return true;
		}
	if(str.length()==2)
	{
		if(str[0]==str[1])
			{
				mp[str]=1;
				return true;
			}
		else
			return false;
	}
	string temp=str.substr(1,str.length()-2);
	bool ans=find_palindrome(temp);
	if(ans==true)
	{
		if(str[0]==str[str.length()-1])
			{
				mp[str]=1;
				return true;
			}
	}
	return false;

}
    int countSubstrings(string s) {
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=1;j<=s.length()-i;j++)
            {
                if(find_palindrome(s.substr(i,j))==true)
                {
                 
                    cnt++;
                }
            }
            }
        return cnt;
    }
};
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    Solution obj;
    string str;
    cin>>str;
    cout<<obj.countSubstrings(str);
    return 0;
}