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
    	int cnt(0);
    	int n,k;
    	cin>>n>>k;
    	string str;
    	cin>>str;
    	for(int i=0;i<n;i++)
    	{
    		if(str[i]=='0') continue;
            if((i+k<n && str[i+k]=='1') || (i-k>=0 && str[i-k]=='1'))continue;
            if(i+k<n)
                str[i+k]='1';
            else
                str[i]='0';
            cnt++;
    	}

    	cout<<cnt<<"\n";
    }
    return 0;
}