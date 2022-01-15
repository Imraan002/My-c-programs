#include<bits/stdc++.h>
using namespace std;
#define ll long long
int N=1e7+19;
vector<bool> is_prime(N,true);
vector<int> lowest_prime(N,0);
vector<int> highest_prime(N,0);
vector<int> prime_factors;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<N;i++)
    {
    	if(is_prime[i]==true)
    	{
    		lowest_prime[i]=highest_prime[i]=i;
    		for(int j=2*i;j<N;j+=i)
    		{
    			is_prime[j]=false;
    			highest_prime[j]=i;
    			if(lowest_prime[j]==0)
    			{
    				lowest_prime[j]=i;
    			}
    		}
    	}
    }
 			int n;
 			cin>>n;
 			while(n)
 			{
 				int temp=lowest_prime[n];
 				while(n%temp==0)
 				{
 					n=n/temp;
 					prime_factors.push_back(temp);
 				}
 			}
 			for(int k:prime_factors)
 			{
 				cout<<k<<" ";
 			}
     return 0;
}