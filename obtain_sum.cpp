#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
 long long t;
 cin>>t;
 while(t--)
 {
 	long long n,sum;
 	cin>>n>>sum;
 	long long  total=(n*(n+1))/2;
 	long long diff=total-sum;
 	if(diff<=0 || sum>total)
 	{
 		cout<<-1<<endl;
 		continue;
 	}
 	if(diff>n)
 		cout<<-1<<endl;
 	else
 		cout<<diff<<endl;
 }   
    return 0;
}