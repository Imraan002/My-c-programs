#include<bits/stdc++.h>
using namespace std;
#define ll long long
int countarr[10];
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
    for(auto &k:arr)
    {
    	cin>>k;
    	countarr[k]++;
    }
    bool flag=true;
    vector<int> ans;
 	if(count(arr,arr+n,5)!=0 || count(arr,arr+n,7)!=0)
    	cout<<-1<<"\n";
    else{
    	for(int i=1;i<=n/3;i++)
    	{
    		if(countarr[1]!=0 && countarr[2]!=0 && countarr[4]!=0)
    		{
    			ans.push_back(1);
    			ans.push_back(2);
    			ans.push_back(4);
    			countarr[1]--;
    			countarr[2]--;
    			countarr[4]--;
    		}
    		else if(countarr[1]!=0 && countarr[2]!=0 && countarr[6]!=0)
    		{
    			ans.push_back(1);
    			ans.push_back(2);
    			ans.push_back(6);
    			countarr[1]--;
    			countarr[2]--;
    			countarr[6]--;
    		}
    		else if(countarr[1]!=0 && countarr[3]!=0 && countarr[6]!=0)
    		{
    			ans.push_back(1);
    			ans.push_back(3);
    			ans.push_back(6);
    			countarr[1]--;
    			countarr[3]--;
    			countarr[6]--;
    		}
    		else{
    			flag=false;
    			break;
    		}
    	}
    	if(flag)
    	{
    		for(int i=0;i<ans.size();i++)
    		{
    			if(arr[i]==0)continue;
    			cout<<ans[i]<<" ";
    			if(i!=0 && (i+1)%3==0)
    				cout<<"\n";
    		}
    	}
    	else{
    		cout<<-1<<"\n";
    	}
    }

    return 0;
}