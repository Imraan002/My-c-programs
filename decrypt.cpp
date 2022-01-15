#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+10;
vector<int> arr(N);
int hsh[N];
int smallest_prime[N];
int exists[N];
vector<int> find_distinct_prime_factors(int num)
{
    vector<int> temp;
    while(num>1)
    {
        int smlprme=smallest_prime[num];
        while(num%smlprme==0)
        {
            num=num/smlprme;
        }
        temp.push_back(smlprme);
    }
    return temp;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        hsh[x]=1;
    }
    exists[1]=1;
    for(int i=2;i<N;i++)
    {
        if(hsh[i])
        {
              for(ll int j=i;j<N;j=j*i)
           {
                exists[j]=1;
           }
           
        }
      
    }
    for(int i=2;i<N;i++)
    {
        if(smallest_prime[i]==0)
        {
            for(int j=i;j<N;j=j+i)
            {
                if(smallest_prime[j]==0)
                    smallest_prime[j]=i;
            }
        }
        
    }
    for(int i=0;i<q;i++)
    {
        int num;
        cin>>num;
        vector<int> primes=find_distinct_prime_factors(num);
        bool ans=false;
        for(int i=0;i<primes.size();i++)
        {
            for(int j=i;j<primes.size();j++)
            {
                int product=primes[i]*primes[j];
                if(i==j && num%(primes[i]*primes[j])!=0)
                    continue;
                if(exists[num/product]==1)
                {
                    ans=true;
                    break;
                }
            }
            if(ans)
                break;
        }
        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
  
    return 0;
}