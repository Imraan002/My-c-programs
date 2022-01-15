#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<string> solve(int n)
{
    vector<string> myans;
    
    if(n<=0)
    {
        myans.push_back("");
        return myans;
    }
    vector<string> temp;
    for(int i=1;i<=6;i++)
    {
        if(n-i>=0)
        {
                temp=solve(n-i);
              for(auto k:temp)
               {
               myans.push_back(k+to_string(i));
             }
        }
    }
    return myans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin>>n;
    vector<string> ans=solve(n);
    for(auto k:ans)
    {
        cout<<k<<"\n";
    }

    return 0;
}