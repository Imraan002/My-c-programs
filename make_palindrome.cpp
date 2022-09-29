#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dp[1003][1003];
string str;
int find_palindrome(int i,int j)
{
	if(i>=j)
		return 0;

	if(dp[i][j]!=-1)
		return dp[i][j];
	int ans = 0;

	if(str[i]==str[j])
	{
		ans = find_palindrome(i+1,j-1);
	}
	else{
		
		ans=min(1+find_palindrome(i,j-1),1+find_palindrome(i+1,j));
	}
	return dp[i][j]=ans;
}

void solve()
{
   cin>>str;

   memset(dp,-1,sizeof(dp));
   int ans = find_palindrome(0,str.size()-1);
   cout<<ans<<"\n";
}
 
int main()
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