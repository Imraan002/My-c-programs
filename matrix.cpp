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
    int arr[5][5];
    int row(0),col(0);
    for(int i=0;i<5;i++)
    {
    	for(int j=0;j<5;j++)
    	{
    		cin>>arr[i][j];
    		if(arr[i][j]==1)
    		{
    			row=i;
    			col=j;
    		}
    	}
    }
    row++;
    col++;
   cout<<abs(3-row)+abs(3-col)<<"\n";
    return 0;
}