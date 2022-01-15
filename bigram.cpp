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
    	vector<string> arr;
    	for(int i=1;i<=n-2;i++)
    	{
    		string str;
    		cin>>str;
    		arr.push_back(str);
    	}
    	bool flag=true;
    	string ans=" ";
    	ans+=arr[0][0];
    	for(int i=0;i<n-3;i++)
    	{
    		if(arr[i][1]!=arr[i+1][0])
    		{
    			ans+=arr[i][1];
    			ans+=arr[i+1][0]; 
    			flag=false;
    		}
    		else{
    			ans+=arr[i][1];
    		}
    	}
    	ans+=arr[arr.size()-1][1];
    	if(flag==true)
    	{
    		ans+='a';
    	}
    	cout<<ans<<"\n";
    }
    return 0;
}