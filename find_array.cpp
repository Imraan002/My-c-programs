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
 		int cnt=2;
 		for(int i=0;i<n;i++)
 		{
 			cout<<cnt+i<<" ";
 		}
 		cout<<"\n";
 	}   
    return 0;
}