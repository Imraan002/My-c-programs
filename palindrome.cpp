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
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        map<char,multiset<int>> mp;
        vector<char> res(str.length()+1);
        res[0]=0;
        cout<<res.size()<<endl;
        for(int i=0;i<str.length();i++)
        {
            mp[str[i]].insert(i+1);
        }
        int odd_cnt=1;
        for(auto k:mp)
        {
            if(k.second.size()%2!=0)
            {
                odd_cnt++;
            }
        }
        if(odd_cnt>1)
        {
            cout<<-1<<endl;
            continue;
        }
        int i=1;
        int j=res.size()-1;
        for(auto k:mp)
        {
            if(k.second.size()%2!=0)
            {
                res[res.size()/2]=k.first;
                mp[k.first].erase(k.second.begin());
            }
            while(i<j && k.second.size()!=0)
            {
                res[i++]=k.first;
                res[j--]=k.first;
                mp[k.first].erase(k.second.begin());
                mp[k.first].erase(k.second.begin());
            }
        }
        cout<<res.size()<<endl;

    }
    return 0;
}