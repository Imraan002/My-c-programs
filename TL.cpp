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
    int n,m;
    cin>>n>>m;
    int correct[n],wrong[m];
    for(int i=0;i<n;i++)
    {
    	cin>>correct[i];
    }
    for(int i=0;i<m;i++)
    {
    	cin>>wrong[i];
    }
    sort(correct,correct+n);
    sort(wrong,wrong+m);
    int ans=-1;
    ans=max(2*correct[0],correct[n-1]);
    if(ans>=wrong[0])
    	ans=-1;
    cout<<ans;


    return 0;
}