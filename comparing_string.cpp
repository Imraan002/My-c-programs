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


	string a,b;
	cin>>a>>b;

	if(a.size() != b.size())
	{
		cout<<"NO\n";
	}
	else{
		int cnt(0);
		string temp;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]!=b[i])
			{
				temp.push_back(a[i]);
				temp.push_back(b[i]);
				cnt++;
			}
		}
		string temp2=temp;
		reverse(temp.begin(),temp.end());
		if(temp==temp2 & cnt==2)
		{
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}

	}

	return 0;
}