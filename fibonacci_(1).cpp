#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int fibFormula(ll int num)
{
	return ((1+sqrtl(5))/2)/sqrtl(5);
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll int num;
    cin>>num;
    cout<<fibFormula(num)<<"\n";
    return 0;
}