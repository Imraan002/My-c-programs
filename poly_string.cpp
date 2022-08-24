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
  
    int t;
    cin>>t;
    while(t--)
    {
         
          string str;
            cin>>str;
            set<char> st;

        int cnt=1;

        
        for(int i=0;i<str.size();i++)
        {
            st.insert(str[i]);
            if(st.size()>3)
            {
                cnt++;
                st.clear();
            }
            st.insert(str[i]);
            
        }
        cout<<cnt<<"\n";
    } 
    return 0;
}