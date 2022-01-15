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
 		int cnt(0);
 		for(int i=0;i<7;i++)
 		{
 			int x;
 			cin>>x;
 			if(x==1)
 				cnt++;
 		}
 		if(cnt>=4)
 			cout<<"yes\n";
 		else
 			cout<<"no\n";
 	}   
    return 0;
}