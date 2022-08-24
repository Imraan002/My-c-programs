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
    	int n;
    	cin>>n;

    	bool res=false;

    	for(int i=0;i<n;i++)
    	{
    		int k;
    		cin>>k;

    		if(k%2)
    		{
    			res=true;
    			
    		}
    	}
    	if(res)
    		cout<<"first\n";
    	else
    		cout<<"second\n";
    }
    return 0;
}