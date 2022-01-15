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
    char A,B;
    cin>>A>>B;
    if(A==B)
    {
    	cout<<A<<"\n";
    }
    else if(A=='R' || B=='R')
    	
    	{
    		cout<<"R"<<" ";
    	}
    	
    	else{
    		cout<<"B"<<" ";
    	}
    
    return 0;
}