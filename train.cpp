#include<bits/stdc++.h>
using namespace std;
#define ll long long

map<int,vector<int>> mp;
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

    	int n,q;
    	cin>>n>>q;

    	int arr[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
            mp[arr[i]].push_back(i);
    	}
    	while(q--)
    	{
    		int l,r;
    		cin>>l>>r;

            if(mp.find(l)==mp.end() || mp.find(r)==mp.end())
            {
                cout<<"No\n";
                continue;
            }
    		if(mp[l][0]<=mp[r][mp[r].size()-1])
            {
                cout<<"Yes\n";
            }
    		
    		else{

    			cout<<"No\n";
    		}
    	}
        mp.clear();
    }
    return 0;
}