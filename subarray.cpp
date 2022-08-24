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
        int n;
        cin>>n;

        int arr[n+1];

        for(int i=1;i<n+1;i++)
        {
            cin>>arr[i];
        }
        arr[0]=0;
        
        int last[n+1];

        int ans=0;

        memset(last,0,sizeof(last));
        for(int i=1;i<n+1;i++)
        {
            int l = max(last[arr[i]]+1,i-(arr[i]-1));

            int r=min(i,n-(arr[i]-1));

            last[arr[i]]=i;
            if(r>=l)
                ans+=(r-l)+1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}