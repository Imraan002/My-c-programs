#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(x)
#define ull unsigned long long
#define int long long

void solve(){

    int n;
    cin>>n;
    string str;
    cin>>str;

    int ans(0);

    string marked(n,'1');

    for(int i=0;i<n;i++)
    {
        if(str[i]=='0')
        {
            for(int j=i+1;j<=n;j+=i+1)
            {
                if(str[j-1]=='1')break;

                if(marked[j-1]=='0')continue;

                marked[j-1]='0';

                ans += i+1;

            }
        }
    }
    
    cout<<ans<<"\n";

}



signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);              //Imraan
    #endif

        fast_io;
        int t;
        cin>>t;
        
    while(t--)
    {
        
        solve();    

    }


    return 0;
}