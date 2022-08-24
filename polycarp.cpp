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
        int b[7];
        for(int i=0;i<7;i++)
        {
            cin>>b[i];
        }
         cout << b[0] << ' ' << b[1] << ' ' << b[6] - b[0] - b[1] << endl;
    }
    return 0;
}