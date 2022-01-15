#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1e7+10
vector<int> is_prime(N,1);
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin>>n;
    is_prime[0]=is_prime[1]=0;
    for(int i=2;i<N;i++)
    {
    	if(is_prime[i]==1)
    	{
    		for(int j=2*i;j<N;j=j+i)
    		{
    			is_prime[j]=0;
    		}
    	}
    }
    for(int i=0;i<n;i++)								//sieve of eratosthenes
    {
    	if(is_prime[i]==1)
    		cout<<i<<" ";
    }
    return 0;
}