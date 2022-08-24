#include<bits/stdc++.h>
using namespace std;
#define ll long long

 int romanToInt(string s) {
        
        int ans=0;
        
        map<char,int> mp;
        
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        for(int i=0;i<s.size();i++)
        {
            if(i<s.size()-1)
            {
                if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X'))
                {
                    ans += mp[s[i+1]]- mp[s[i]];
                    i++;
                }
                else if(s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C') )
                {
                    ans += mp[s[i+1]] - mp[s[i]];
                    i++;
                }
                else if(s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M'))
                {
                    ans +=  mp[s[i+1]] - mp[s[i]];
                    i++;
                }
                else{
                	cout<<"imran";
                    ans+=mp[s[i]];
                }
            }
            else {
            	cout<<"hus";
                ans+=mp[s[i]];
            }
        }
        return ans;
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

    cout<<romanToInt(str);
    return 0;
}