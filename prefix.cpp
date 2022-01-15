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
 	int flag=n/2;
 	if(flag%2==1)
 	{
 		cout<<"No\n";
 		continue;
 	}
 	set<int> a,b;
 	int arr[n];
 	for(int i=0;i<n;i++)
 	{
 		arr[i]=i+1;
 	}
 	int i=0;
 	int j=n-1;
 	while(i<=j)
 	{
 		a.insert(arr[i]);
 		a.insert(arr[j]);
 		i=i+2;
 		j=j-2;
 	}
 	 i=1;
 	 j=n-2;
 	while(i<=j)
 	{
 		b.insert(arr[i]);
 		b.insert(arr[j]);
 		i=i+2;
 		j=j-2;
 	}
 	cout<<"Yes\n";
 	for(auto k:a)
 	{
 		cout<<k<<" ";
 	}
 	cout<<endl;
 	for(auto k:b)
 	{
 		cout<<k<<" ";
 	}
 	cout<<endl;
 }   
    return 0;
}