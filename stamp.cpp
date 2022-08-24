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
        int n;
        cin>>n;
        string str;
        cin>>str;
        bool ans=true;

        for(int i=0;i<n;i++)
        {
            while(str[i]=='W')i++;
            if(i==n)break;
            int B_cnt(0),R_cnt(0);
            while(i<n && str[i]!='W')
            {
               if(str[i]=='B')
               {
                B_cnt++;
                i++;           
            }
            else{

                R_cnt++;
                i++;
            }
        }
         if(R_cnt==0 || B_cnt==0)
            {
                ans=false;
                break;
            }

         }
    if(ans)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}   
return 0;
}