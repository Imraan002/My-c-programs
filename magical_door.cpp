#include<bits/stdc++.h>
using namespace std;
#define ll long long
void reverse_bits(string &str)
{
	for(int i=0;i<str.size();i++)
	{
		if(str[0]=='0')
		{
			str[0]='1';
		}
		else{
			str[0]='0';
		}
	}
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
   int t;
   cin>>t;
   while(t--)
   {
   		string str;
   		cin>>str;
   		int cnt(0);
   		if(str[0]=='0')
   			cnt++;

   		for(int k=1;k<str.size();k++)
   		{
   			if(str[k]!=str[k-1])
   			{
   				cnt++;
   			}

   		}
   		cout<<cnt<<endl;
   		
   }
    return 0;
}