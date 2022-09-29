#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(x)
#define ull unsigned long long


void solve(){

	string str;
	cin>>str;

	int mn = 9;

	for(int i=str.size()-1;i>=0;i--)
	{
		mn = min(mn,str[i]-'0');
		if(str[i]!='9' && str[i]-'0'>mn)
		{
			str[i]=(str[i]+1);
		}
	}
	sort(str.begin(),str.end());
	cout<<str<<"\n";
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