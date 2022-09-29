#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin>>n;

    string str;
    cin>>str;

    int sum=0;

    vector<int> ans;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='L')
        {
            sum+=i;
        }
        else{
            sum+=(n-1)-i;
        }
    }
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='L')
        {   
            if((n-1-i)>i)
              ans.push_back((n-1-i)-i);
            
        }
        else {
                if(i>(n-1-i))
                      ans.push_back(i-(n-1-i));
            
        }
    }

    sort(ans.begin(),ans.end());
   // cout<<sum;
  
    // for(auto k:ans)
    // {
    //     cout<<k<<" ";
    // }
    for(int i=0;i<n;i++)
    {
        if(ans.size()>0)
        {
                
                sum+=ans.back();
                ans.pop_back();
            
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t;
    cin >> t;


    while(t--)
    {
        solve();
    }
    return 0;
}