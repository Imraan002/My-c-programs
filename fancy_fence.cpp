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
    	int angle;
    	cin>>angle;
    	if(360%(180-angle)==0)
    		cout<<"YES\n";
    	else 
    		cout<<"NO\n";
    }
    return 0;
}