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
vector<int>ans;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
priority_queue<int>pr;
pr.push(1);
pr.push(2);
pr.push(3);
pr.push(4);
while(!pr.empty())
{
	cout<<pr.top();
	pr.pop();
}

return 0;
}