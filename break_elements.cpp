#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(x)
#define ull unsigned long long
#define int long long

void solve(){

	int n;
	cin>>n;

	
	int even(0);
	int odd(0);
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		
		if((a%2)==0)
		{
			even++;
		}
		else{
			odd++;
		}
		
	}
	
	if(odd==0 || even==0)
	{
		cout<<0<<"\n";
	}
	else{
		cout<<even<<"\n";
	}
	
	
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