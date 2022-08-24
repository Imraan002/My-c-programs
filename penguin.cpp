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
	    
	    int n,m,d;
	    cin>>n>>m>>d;

	    int arr[n][m];

	    vector<int> temp;

	    for(int i=0;i<n;i++)
	    {
	    	for(int j=0;j<m;j++)
	    	{
	    		cin>>arr[i][j];
	    		temp.push_back(arr[i][j]);
	    		
	    	}
	    }

	    sort(temp.begin(),temp.end());

	    int ans=-1;

	    if(temp.size()%2==0)
	    {
	    	ans = (temp.size()/2)-1;
	    }
	    else{
	    	ans = (temp.size()/2);
	    }
	    
	    int res=0;

	    // cout<<ans<<"\n";
	    bool flg=true;
	    for(int i=0;i<temp.size();i++)
	    {
	    	if(abs(temp[i]-temp[ans])%d!=0)
	    	{
	    		flg=false;
	    		break;
	    	}

	    	res += abs(temp[i]-temp[ans])/d;
	    }
	    
	    	if(flg)
	    		cout<<res<<"\n";
	    	else
	    		cout<<-1<<"\n";
	    

	    return 0;
	}