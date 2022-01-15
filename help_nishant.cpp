#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e9+10;
vector<ll int> vec(N);
ll int solve(ll int num)
{
	ll int i=1;
	ll int steps(0);
	while(num>0)
	{
		num=num-i;
		i++;
		steps++;
	}
return steps;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
   ll int t;
   cin>>t;
   while(t--)
   {
   	ll int n;
   	cin>>n;
   	cout<<2*solve(n)<<"\n";
   }
    return 0;
}