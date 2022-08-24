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
        vector<string> arr(n);
        map<char,ll> f_oc,l_oc;
        map<string,ll> cnt;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            f_oc[arr[i][0]]++;
            l_oc[arr[i][1]]++;
            cnt[arr[i]]++;
        }
        ll int ans(0);
        for(int i=0;i<n;i++)
        {
            ll int x=f_oc[arr[i][0]]-cnt[arr[i]];
            ans+=x;
            ll int k=l_oc[arr[i][1]]-cnt[arr[i]];
            ans+=k;
            if(f_oc[arr[i][0]]>0)f_oc[arr[i][0]]--;
            if(l_oc[arr[i][1]]>0)l_oc[arr[i][1]]--;
            if(cnt[arr[i]]>0)cnt[arr[i]]--;
        }
        cout<<ans<<"\n";
    }
    return 0;
}