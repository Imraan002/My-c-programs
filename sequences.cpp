#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int mod=1e9+7;

int main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	ll int x,y,n;
	cin>>x>>y>>n;

	int arr[7];
	arr[0]=(x-y+mod)%mod;
	arr[1]=(x+mod)%mod;
	arr[2]=(y+mod)%mod;
	arr[3]=(y-x+mod)%mod;
	arr[4]=(-x+mod)%mod;
	arr[5]=(-y+mod)%mod;
	arr[6]=(x-y+mod)%mod;

	cout<< (arr[(n%6)]+mod)%mod<<"\n";
	return 0;
}