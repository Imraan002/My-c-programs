#include<bits/stdc++.h>
using namespace std;
#define ll long long


void balanced_parenthesis(vector<string> &temp,int open,int close,string op)
{

	if(open==0 && close==0)
	{
		temp.push_back(op);
		return;
	}
	if(open>0)
	{
		string k=op;
		k.push_back('(');
		balanced_parenthesis(temp,open-1,close,k);
	}

	if(close>open)
	{
		string k=op;
		k.push_back(')');
		balanced_parenthesis(temp,open,close-1,k);
	}
}
vector<string> solve(int n)
{
	vector<string> temp;
	balanced_parenthesis(temp,n/2,n/2,"");
	return temp;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int n;
    cin>>n;

    vector<string> ans = solve(n);

    for(auto str:ans)
    {
    	cout<<str<<"\n";
    }
    return 0;
}