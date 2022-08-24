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

    		string str;
    		cin>>str;

    		int p;
    		cin>>p;

    		int cost=0;
    		vector<pair<char,int>> arr;
    		vector<int> idx(str.size()+1);
    		for(int i=0;i<str.size();i++)
    		{
    			arr.push_back({str[i],i});
    			cost+=str[i]-96;
    		}
    		sort(arr.begin(),arr.end());

    		if(cost<=p)
    		{
    			cout<<str<<"\n";
    			continue;
    		}
    		else{

    			int i=str.size()-1;
    			while(cost>p && i>=0)
    			{
    				cost=cost-(arr[i].first-96);
    				idx[arr[i].second]=-1;
    				i--;

    			}
    			for(int i=0;i<str.size();i++)
    			{
    				if(idx[i]!=-1)cout<<str[i];
    			}
    			cout<<"\n";
    		}

    	}
    return 0;
}