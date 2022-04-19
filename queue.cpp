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
	int n,t;
	cin>>n>>t;
	string str;
	cin>>str;
	

	for(int i=1;i<=t;i++)
	{
		for(int j=0;j<str.size();j++)
		{
			if(str[j]=='B' && str[j+1]=='G' && j!=str.size()-1)
			{
				swap(str[j],str[j+1]);
				j++;
			}
		}
	}
	cout<<str<<"\n";
	return 0;
}