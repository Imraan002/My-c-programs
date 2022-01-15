#include<bits/stdc++.h>
using namespace std;
#define ll long long
int maxAND(int L, int R)
{
 
    if (L == R)
        return L;
 
 
    else if ((R - L) == 1)
        return (R & L);
    else {
        if (((R - 1) & R) > ((R - 2) & (R - 1)))
            return ((R - 1) & R);
        else
            return ((R - 2) & (R - 1));
    }
}
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
    	int arr[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	for(int i=0;i<n;i++)
    	{
    		if(i!=0)
    			cout<<max((arr[i]&arr[i+1]),(arr[i]&arr[i-1]))<<" ";
    		else{
    			cout<<(arr[i]&arr[i+1])<<" ";
    		}
    	}
    	cout<<"\n";
    }
    return 0;
}