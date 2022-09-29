#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(x)
#define ull unsigned long long
#define int long long

struct  MonotoneDeque{

    deque<int> dq;

    void insert(int x)
    {
        while(!dq.empty() && dq.back() > x)
        {
            dq.pop_back();
        }

        dq.push_back(x);
    }

    void remove(int x)
    {
        if(!dq.empty() && dq.front()==x)
        {
            dq.pop_front();
        }
    }

    int getMin()
    {
        if(!dq.empty())
        {
            return dq.front();
        }
        else{
            return 1e18;
        }
    }
};
void solve(){

	int n,m,k;
	cin>>n>>m>>k;

	int bus[n+1],flight[n+1];

	for(int i=1;i<=n;i++)
	{
		cin>>bus[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>flight[i];
	}

	int dp[n+1][m+1];

	MonotoneDeque dq;

	for(int i=1;i<=n;i++)
	{
		
		for(int j=0;j<=m;j++)
		{
			
			 if(i==1 && j==0)
			{
				dp[i][j] = 0;
			}
			else if(i==1)
			{
				dp[i][j]=1e9;
			}
			else if(j==0)
			{
				dp[i][j] = dp[i-1][j] + bus[i-1];
			}
			else{


				
				dp[i][j] = dp[i-1][j] + bus[i-1];

				dq.insert(dp[i-1][j-1]+flight[i-1]);

				if(i-k-1>=0)
				{
					dq.remove(dp[i-k-1][j-1]+flight[i-k-1]);
				}

				dp[i][j] = min(dp[i][j],dq.getMin()+flight[i]);
			}
		}
	}

	cout<<dp[n][m]<<"\n";

	

}



signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);              //Imraan
    #endif

        fast_io;
        int t;
        cin>>t;
        
    while(t--)
    {
        
        solve();    

    }


    return 0;
}