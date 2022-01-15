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
    	int n,k;
        cin>>n>>k;
        int arr[n];
        int sum=0;
        bool flag=false;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
            {
                flag=true;
                cnt++;
            }
            sum+=arr[i];
        }
        if(cnt==n)
        {
            cout<<0<<endl;
            continue;
        }
        if(flag==false)
        {
            sum+=2*k*n;
            cout<<sum<<endl;
            continue;
        }
        else{
            unordered_set<int> st;
            for(int i=0;i<n;i++)
            {
                if(arr[i]!=0)
                {
                    st.insert(i);
                }
            }
            while(st.size()<n && k)
            {
                sum+=st.size()*2;
                unordered_set<int> wt;
                for(auto x:st)
                {
                    
                    if(x==0)
                    {
                       wt.insert(n-1);
                    }
                    else
                    {
                        wt.insert(x-1);
                    }
                    wt.insert(x);
                    wt.insert((x+1)%n);
                }
                st=wt;
                k--;
            }
            if(k)
            {
                sum+=n*k*2;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}