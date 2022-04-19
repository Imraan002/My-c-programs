#include<bits/stdc++.h>
using namespace std;
#define ll long long
char box[5][5];
bool check(int i,int j)
{
	if(box[i][j]==box[i+1][j]&& box[i][j]==box[i][j+1] || box[i][j]==box[i+1][j]&& box[i][j]==box[i+1][j+1] || box[i+1][j+1]==box[i][j+1]&& box[i+1][j+1]==box[i+1][j])
	{
		return true;
	}
	return false;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    for(int i=1;i<=4;i++)
    {
    	for(int j=1;j<=4;j++)
    	{
    		cin>>box[i][j];
    	}
    }
    
    bool ans=false;
    for(int i=1;i<4;i++)
    {
    	for(int j=1;j<4;j++)
    	{
    		if(check(i,j))
    		{
    			ans=true;
    			break;
    		}
    	}
    }
    if(ans)
    	cout<<"YES\n";
    else
    	cout<<"NO\n";
    return 0;
}