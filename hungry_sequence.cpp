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
    
    int n;
    cin>>n;

    int arr[100010];

    for(int i=2;i<sqrt(100010);i++)
	{
		for(int j=i*i;j<100010;j=j+i)
		{
			arr[j]=-1;
		}
	}

    int cntr=0;
    for(int i=3;i<1000000;i++)
    {
    	if(cntr==n)break;
    	if(arr[i]==-1)continue;
    	else
    	{
    		cout<<i%10000000<<" ";
    		cntr++;
    	}
    }

    return 0;
}