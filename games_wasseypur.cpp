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
    	string str;
    	cin>>str;
    	int blocks(1);
    	for(int i=0;i<str.size()-1;i++)
    	{
    		if(str[i+1]!=str[i])
    		{
    			blocks++;
    		}
    	}
    	if(blocks%3==0)
    	{
    		cout<<"RAMADHIR\n";
    	}
    	else
    	{
    		cout<<"SAHID\n";
    	}
    }
    return 0;
}