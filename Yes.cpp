#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
    	string str;
    	cin>>str;
    	// bool flag=true;
		if(str.size()>=4 || str.size()<=1)
		{
			cout<<"NO\n";
		}
		else if(str.size()==2)
		{
			if(str!="NO" || str!="nO" || str!="No" || str!="no")
			{
				cout<<"NO\n";
			}
			else{
				cout<<"YES\n";
			}
		}
		else if(str.size()==3)
		{
			if((str[0]=='Y' || str[0]=='y') && (str[1]=='E' || str[1]=='e') && (str[2]=='s' || str[2]=='S'))
				cout<<"YES\n";
			
			else
				cout<<"NO\n";
		}
		

    }
    return 0;
}