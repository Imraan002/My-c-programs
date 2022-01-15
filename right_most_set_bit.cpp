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
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<(int)log2(n)+1;i++)
    {
    	if(n&(1<<i))
    	{
    		ans=i;
    		break;
    	}
    }
    cout<<ans+1<<" position is the first set bit from right \n";
    return 0;
}