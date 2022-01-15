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
 	int a,b,c,x,y,z;
 	cin>>a>>b>>c;
 	cin>>x>>y>>z;
 	pair<int,int> pr[3]={{x,a},{y,b},{z,c}};
 	priority_queue<pair<int>,vector<pair<int>>> pq;
 	for(int i=0;i<3;i++)
 	{
 		pq.insert(pr[i]);
 	}

 }   
    return 0;
}