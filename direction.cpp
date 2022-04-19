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
 	int n,m;
 	cin>>n>>m;
 	int ans=0;
 	if((n==1 && m>2) || (n==1 && m>2))
 	{
 		cout<<-1<<"\n";
 		continue;
 	}
 	int t=min(n,m);
 	int diff=abs(n-m);
 	if(diff%2==0)
 	{
 		ans=2*(t-1)+2*diff;
 	}
 	else{
 		ans=2*(t-1)+2*diff-1;
 	}
 	cout<<ans<<"\n";
 }   
    return 0;
}