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

 		vector<vector<int>> vec(n,vector<int> (n,-1));
 		for(int i=0;i<n;i++)
 		{
 			for(int j=0;j<n;j++)
 			{
 				char t;
                cin>>t;
                vec[i][j]=t-'0';
 			}
 		}

 		int ans=0;

 		for(int i=0;i<n;i++)
 		{
 			for(int j=0;j<n;j++)
 			{
 				
               
                 int temp=vec[i][j]+vec[j][n-1-i]+vec[n-1-i][n-1-j]+vec[n-1-j][i];
                 ans+=min(temp,4-temp);
               
 			}
 		}
 		cout<<ans/4<<"\n";
 	}   
    return 0;
}