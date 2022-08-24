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
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i][0]>>arr[i][1];

    }
    int cnt(0);
    for(int i=0;i<n;i++)
    {
    	bool flag=false;
    	for(int j=0;j<n;j++)
    	{
    		if(i!=j && arr[i][0]==arr[j][1])
    		{
    			flag=true;
    			break;
    		}
    	}
    	if(flag==false)
    	{
    		cnt++;
    	}
    }
    cout<<cnt<<"\n";

    return 0;
}