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

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	vector<int> vec(arr,arr+n);
	sort(vec.begin(),vec.end());
	vector<int> ans;


	for(int i=0;i<n;i++)
	{
		if(vec[i]!=arr[i])
		{
			ans.push_back(i+1);

		}
		else{
			continue;
		}
	}
	if(ans.size()==0)
	{
		cout<<"yes\n";
		cout<<1<<" "<<1<<"\n";
	}
	else{
		bool res=true;
		for(int i=ans[0]-1;i<ans[ans.size()-1]-1;i++)
		{
			if(arr[i]<arr[i+1])
			{
				res=false;
			}
		}
		if(ans.size()==0)
		{
			cout<<"yes\n";
			cout<<1<<" "<<1<<"\n";
		}
		else if(res==false)
		{
			cout<<"no\n";
		}
		else
		{
			cout<<"yes\n";
			cout<<ans[0]<<" "<<ans[ans.size()-1]<<"\n";
		}

	}

	return 0;
}
