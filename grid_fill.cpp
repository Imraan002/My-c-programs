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
    int t;;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int arr[n][n];
    	if(n%2==0)
    	{
    	    for(int i=0;i<n;i++)

    		{
    			for(int j=0;j<n;j++)
    			{
    				arr[i][j]=-1;
    			}
    		}
    	}
    	else{
    		for(int i=0;i<n;i++)
    		{
    			for(int j=0;j<n;j++)
    			{
    				if(i==j)
    				{
    					arr[i][j]=-1;
    				}
    				else{
    					arr[i][j]=1;
    				}
    		
    			}
    		}
    	}
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    			cout<<arr[i][j]<<" ";
    		}
    		cout<<endl;
    	}
    }
    return 0;
}