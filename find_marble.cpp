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
    
    int glasses;
    cin>>glasses;

    int pos_i,pos_f;
    cin>>pos_i>>pos_f;

    int arr[glasses+1];
    for(int i=1;i<glasses+1;i++)
    {
    	cin>>arr[i];
    }
    if(pos_i==pos_f)cout<<0<<"\n";

    else if(pos_i==arr[pos_i] )cout<<-1<<"\n";
    else{

    	int ans=0;
    	int start = pos_i;
    	int i=pos_i;
    	while(true)
    	{


    		int k=arr[i];
    		if(k==pos_f)
    		{
				ans++;
    			break;
    		}
    		i=arr[i];
    		if(i==start)
    		{
    			ans=-1;
    			break;
    		}
    		ans++;
    	}
    	cout<<ans<<"\n";
    }

    return 0;
}