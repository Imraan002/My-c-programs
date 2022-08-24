#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll int mod=1e9+7;

ll int binary(ll int a,ll int b)
{
    ll int ans=1;

    a = a%mod;
    while(b)
    {
        if(1&b)
        {
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        b=b>>1;
    }
    return ans;
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int n;
    cin>>n;

    vector<pair<int,int>> vec;

    for(int i=0;i<n;i++)
    {
    	int a,b;
    	cin>>a>>b;
    	vec.push_back({a,b});
    }
    

   ll int no_div=1;

   ll int sum_div=1;

   ll int prod_div=1;

   ll int number=1;
    
    for(int i=0;i<n;i++)
    {
    	no_div = (no_div* (vec[i].second+1))%mod;

        sum_div= (sum_div * (binary(vec[i].first, vec[i].second + 1) - 1) % mod * binary(vec[i].first - 1, mod - 2) % mod);
    	

    	number= (number*binary(vec[i].first,vec[i].second))%mod;
    }
    
  
    
  // prod_div = (binary(sqrtl(number),no_div));
    if(no_div%2==0)
    {
    	prod_div=binary(number,no_div/2)%mod;
    }
    else{
    	prod_div=binary(sqrtl(number),no_div)%mod;
    	
    }

   
    cout<<no_div<<" "<<sum_div<<" "<<prod_div%mod<<"\n";

   
   

    return 0;
}