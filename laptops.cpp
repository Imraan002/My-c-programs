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
    
    int n;
    cin>>n;

    bool flag=false;
    for(int i=0;i<n;i++)
    {
    	int a,b;
    	cin>>a>>b;

    	if(a!=b)
    		{
    			flag=true;
    		}
    }
  	 if(flag)
  	 	cout<<"Happy Alex\n";
  	 else
  	 	cout<<"Poor Alex\n";
  	 return 0;
    
}