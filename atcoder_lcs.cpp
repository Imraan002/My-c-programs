#include<bits/stdc++.h>
using namespace std;
#define ll long long

string str1,str2;

string ans="";
int rec(int i,int j)
{
	if(i==str1.size() || j==str2.size())
		return 0;

	 int ans = max(rec(i+1,j),rec(i,j+1));

	if(str1[i]==str2[j])
	{
		ans = max(ans,1+rec(i+1,j+1));
	}
	return ans;
}

void printLCS(int i,int j)
{
	if(rec(i,j)==rec(i+1,j))
	{
		printLCS(i+1,j);
	}
	else if(rec(i,j)==rec(i,j+1))
	{
		printLCS(i,j+1);
	}
	else{
		ans+=str2[j];
		printLCS(i+1,j+1);
	}
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    cin>>str1>>str2;
    
    printLCS(0,0);
    cout<<ans<<"\n";
    return 0;
}