#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
{
	cin>>v[i];
}
priority_queue<int,vector<int>,greater<int> > pq;

for(int i=0;i<n;i++)
{
	pq.push(v[i]);
}
int ans=0;
while(pq.size()>1)
{
	int e1=pq.top();
	pq.pop();
	int e2=pq.top();
	pq.pop();
	ans=ans+e1+e2;
	pq.push(e1+e2);

}
cout<<ans;
return 0;
}