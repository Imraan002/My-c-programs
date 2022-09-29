#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	int stu;
	cin>>stu;

	vector<int> arr[stu+1];

	for(int i=1;i<=stu;i++)
	{
		int k;
		cin>>k;

		for(int j=1;j<=k;j++)
		{
			int ele;
			cin>>ele;
			arr[i].push_back(ele);
		}
	}
	bool ans=false;

	for(int i=1;i<=stu;i++)
	{
		for(int j=i+1;j<=stu;j++)
		{
			if(arr[i].size()+arr[j].size()>=5)
			{
				int chk(0);

				for(auto ele1:arr[i])
				{
					for(auto ele2:arr[j])
					{
						if(ele1==ele2)
						{
							chk++;
						}
					}
				}
				if(arr[i].size()+arr[j].size()-chk==5)
				{
					ans=true;
					break;
				}
			}
		}
	}

	if(ans)
		cout<<"Yes\n";
	else
		cout<<"No\n";

}

signed main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int t;
	cin >> t;


	while(t--)
	{
		solve();
	}
	return 0;
}