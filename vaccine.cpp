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
 	int d,l,r;
 	cin>>d>>l>>r;
 	if(d<l)
 	{
 		cout<<"Too Early\n";
 		continue;
 	}
 	else if(d>r)
 	{
 		cout<<"Too Late\n";
 		continue;
 	}
 	else{
 		cout<<"Take second dose now\n";
 	}
 }   
    return 0;
}