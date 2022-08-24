#include<bits/stdc++.h>
using namespace std;
#define ll long long

map<int,vector<int>> mp;
vector<int> vec;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;

    if(m==0)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
        return 0;
    }
    bool flag=true;

    vec.resize(n+1,-1);

    int team=1;
    
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;

        if( (vec[a]==-1 && vec[b]==-1) || mp.size()==0 )
        {
            
            vec[a]=team;
            vec[b]=team;

            mp[team].push_back(a);
            mp[team].push_back(b);
            team++;
        }
        else{

         if(vec[a]!=-1 && vec[b]!=-1)
         {

            if(vec[a]!=vec[b])
            {
                flag=false;
                break;
            }


        }
        else{
            if(vec[a]!=-1)
            {
                if(mp[vec[a]].size()!=3)
                {
                    vec[b]=vec[a];
                    mp[vec[a]].push_back(b);
                }
                else{
                    flag=false;
                    break;
                    
                }
            }
            else{
                if(mp[vec[b]].size()!=3)
                {
                    vec[a]=vec[b];
                    mp[vec[b]].push_back(a);
                }
                else{
                    flag=false;
                    break;
                    
                }
            }
        }
    }
}

//cout<<mp.size();
int cnt1=0;
int cnt2=0;

set<int> st;
for(int i=1;i<=n;i++)
{
    if(vec[i]==-1)
    {
        cnt1++;
        st.insert(i);
        
       
    }

}


for(int i=1;i<=mp.size();i++)
{
  //  cout<<mp[i][0]<<" "<<mp[i][1]<<" "<<mp[i][2]<<"\n";
    if(mp[i].size()<=2)
    {
        cnt2++;
    }
}
//cout<<cnt1<<cnt2;

if(cnt2>cnt1 || abs(cnt2-cnt1)%3!=0)
{
    cout<<-1<<"\n";
    return 0;
}

for(int i=1;i<=cnt2;i++)
{
    for(int j=1;j<=mp.size();j++)
    {
        if(mp[j].size()<=2)
        {
            mp[j].push_back(*st.begin());
            st.erase(st.begin());
        }
    }
}


while(!st.empty())
{
    for(int i=0;i<3;i++)
    {
        mp[team].push_back(*st.begin());
        st.erase(st.begin());
    }
    team++;
}


if(!flag)
    cout<<-1<<"\n";
else{
    for(int i=1;i<=mp.size();i++)
    {
        cout<<mp[i][0]<<" "<<mp[i][1]<<" "<<mp[i][2]<<"\n";
    }
}

return 0;
}