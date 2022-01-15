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
 	int n,fruits,veg,fish;
 	cin>>n>>fruits>>veg>>fish;
 	int total_dish(0);
 	if(veg>=fruits+fish)
 	{
 		total_dish=fruits+fish;
 	}
 	else{
 		total_dish=veg;
 	}
 	if(total_dish>=n)
 	{
 		cout<<"Yes\n";
 	}
 	else
 	{
 		cout<<"No"<<endl;
 	}
 }   
    return 0;
}