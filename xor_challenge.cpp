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
    ll int num;
    cin>>num;   
   ll int bits_cnt=(int) log2(num)+1;
    ll int a=0;
    ll int b(0);
    vector<ll int> set_bits;
    for(ll int i=0;i<bits_cnt;i++)
    {
        if(num&(1<<i))
        {
            set_bits.push_back(i);
        }
        else
        {
            a=a|(1<<i);
            b=b|(1<<i);
        }
    }
   ll int ans=INT_MIN;
   ll int size=(1<<set_bits.size());
    for(ll int i=0;i<size;i++)
    {
       ll int a_copy(a);
       ll int b_copy(b);
        for(int j=0;j<set_bits.size();j++)
        {
           
            if(i&(1<<j))
            {
                a_copy=a_copy|(1<<set_bits[j]);
            }
            else
            {
                 b_copy=b_copy|(1<<set_bits[j]);
            }
        }
        ans=max(ans,a_copy*1ll*b_copy);
    }
    cout<<ans<<"\n";
    return 0;
}