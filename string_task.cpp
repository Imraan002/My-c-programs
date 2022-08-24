#include<bits/stdc++.h>
using namespace std;
#define ll long long

set<char> st={'A','E','I','O','U','Y','a','e','i','o','u','y'};
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    string str;
    cin>>str;

    transform(str.begin(),str.end(),str.begin(),::tolower);

    for(int i=0;i<str.size();i++)
    {
    	
    	if(st.find(str[i])!=st.end())
    	{
    		
    		str[i]='/';
    	}
    	
    }
  
    for(int i=0;i<str.size();i++)
    {
    	
    	if(str[i]=='/')continue;
    	cout<<'.';
    	cout<<str[i];
    	
    }
    return 0;
}