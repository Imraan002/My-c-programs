#include<bits/stdc++.h>
using namespace std;
#define ll long long

int BIT[100000];

int sum(int idx)
{
	int ans=0;					//Binary Indexed Trees (Fenwick Trees)

	while(idx)
	{
		ans += BIT[idx];

		idx = idx - (idx& -idx);
	}
	return ans;
}

void update(int idx,int num)
{
	for(int i=idx;i<100000;i+=(i&-i))
	{
		BIT[i]+=num;
	}
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int arr[]={1,2,3,4,5,6,7,8,9,10};

    for(int i=0;i<10;i++)
    {
    	update(i+1,arr[i]);
    }

    update(1,1);
    cout<<sum(10);
    return 0;
}