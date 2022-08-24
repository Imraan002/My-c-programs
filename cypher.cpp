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
        int wheels;
        cin>>wheels;

        int arr[wheels];
        for(int i=0;i<wheels;i++)
        {
            cin>>arr[i];
        }
        vector<string> v(wheels);
        for(int i=0;i<wheels;i++)
        {
            int n;
            cin>>n;
            string str;
            cin>>str;
            v[i]=str;
        }

        for(int i=0;i<wheels;i++)
        {
            
            string temp=v[i];

            int u_cnt = count(temp.begin(),temp.end(),'U');
            int d_cnt = count(temp.begin(),temp.end(),'D');

            char val;
            int k=0;
            if(u_cnt==d_cnt)
                continue;
            else if(u_cnt>d_cnt)
            {
                val='-';
                k=abs(u_cnt-d_cnt);
            }
            else{
                val='+';
                k=abs(u_cnt-d_cnt);
            }

            if(val=='+' )
            {
                arr[i]=(arr[i]+k)%10;

            }
            else if(val=='-'){
                
                if(arr[i]>=k)
                {
                    arr[i]=arr[i]-k;
                }
                else{
                    arr[i]=10-(k-arr[i]);
                }
            }
        }
        for(int i=0;i<wheels;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";


    }
    return 0;
}