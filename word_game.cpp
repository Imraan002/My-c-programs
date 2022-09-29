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

    	map<string,vector<int>> mp;

    	vector<int> pts(4,0);

    	for(int i=1;i<=3;i++)
    	{
    		for(int j=1;j<=n;j++)
    		{
    			string temp;
    			cin>>temp;

    			mp[temp].push_back(i);
    		}
    	}

    	for(auto ele:mp)
    	{
    		if(ele.second.size()==1)
    		{
    			pts[ele.second[0]]+=3;
    		
    		}
    		else if(ele.second.size()==2)
    		{
    			pts[ele.second[0]]+=1;
    			pts[ele.second[1]]+=1;

    		}
    	}
    	
    	cout<<pts[1]<<" "<<pts[2]<<" "<<pts[3]<<"\n";

    }
    return 0;
}