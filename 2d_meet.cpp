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
    	int x[n];
    	int y[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>x[i];
    		x[i]*=2;
    	}
    	for(int i=0;i<n;i++)
    	{
    		cin>>y[i];
    		y[i]*=2;
    	}
    	vector<pair<int,int>> vec;
    	for(int i=0;i<n;i++)
    	{
    		vec.push_back({x[i],y[i]});
    	}
    	for(int i=0;i<n;i++)
    	{
    		for(int j=i+1;j<n;j++)
    		{
    			vec.push_back({x[i]+y[i]-y[j],y[j]});
    			vec.push_back({x[j],x[i]+y[i]-x[j]});
    			vec.push_back({(x[i]+y[i]+x[j]-y[j])/2,(x[i]+y[i]+y[j]+x[j])/2});
    			vec.push_back({x[i]-y[i]+y[j],y[j]});
    			vec.push_back({x[j],x[j]-x[i]+y[i]});
    			vec.push_back({(x[i]-y[i]+x[j]+y[j])/2,(y[i]-x[i]+x[j]+y[j])/2});
    			vec.push_back({x[i],y[j]});
    			vec.push_back({x[i],x[i]-x[j]+y[j]});
    			vec.push_back({x[i],x[j]+y[j]-x[i]});
    			vec.push_back({x[j],y[i]});
    			vec.push_back({y[i]+x[j]-y[j],y[i]});
    			vec.push_back({x[j]+y[j]-y[i],y[i]});

    		}
    	}
    	int ans=INT_MAX;
    	for(auto k:vec)
    	{
    		int op=0;
    		for(int i=0;i<n;i++)
    		{
    			if(k.first==x[i] && k.second==y[i])
    			{

    			}
    			else if(k.first==x[i] || k.second==y[i])
    			{
    				op+=1;
    			}
    			else if(abs(k.first-x[i])==abs(k.second-y[i]))
    			{
    				op+=1;
    			}
    			else
    			{
    				op+=2;
    			}
    		}
    		ans=min(ans,op);
    	}
    	cout<<ans<<endl;
    }
    return 0;
}