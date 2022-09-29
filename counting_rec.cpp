#include<bits/stdc++.h>
using namespace std;
#define int long long

int prefix_arr[1005][1005];
int arr[1005][1005];
void solve()
{
    int n,q;
    cin>>n>>q;

   memset(prefix_arr,0LL,sizeof(prefix_arr));
   memset(arr,0LL,sizeof(arr));

    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;

        arr[x][y] += (x*y);

    }
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=1000;j++)
        {
            prefix_arr[i][j] = arr[i][j] + prefix_arr[i-1][j] + prefix_arr[i][j-1] - prefix_arr[i-1][j-1];
            
        }
    }

   
    while(q--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a+1==c || b+1==d)
        {
            cout<<0<<"\n";
            continue;
        }
        
        int ans = prefix_arr[c-1][d-1] - prefix_arr[a][d-1] - prefix_arr[c-1][b] + prefix_arr[a][b];

        if(ans<0)
            cout<<0<<"\n";
        else
            cout<<ans<<"\n";
    }
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