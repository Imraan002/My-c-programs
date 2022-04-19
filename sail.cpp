#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<char,int> mp;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int t,x1,y1,x2,y2;
    cin>>t>>x1>>y1>>x2>>y2;
    string str;
    cin>>str;

    if(x2-x1>=0 && y2-y1>=0)
    {
        mp.insert({'E',abs(x2-x1)});
        mp.insert({'N',abs(y2-y1)});
    }
    else if(x2-x1>=0 && y2-y1<0)
    {
        mp.insert({'E',abs(x2-x1)});
        mp.insert({'S',abs(y2-y1)});
    }
    else if(x2-x1<0 && y2-y1>=0)
    {
        mp.insert({'W',abs(x2-x1)});
        mp.insert({'N',abs(y2-y1)});
    }
    else{
     mp.insert({'W',abs(x2-x1)});
     mp.insert({'S',abs(y2-y1)});
 }


if(mp.begin()->second==0){
    mp.erase(mp.begin()->first);
}
if(mp.end()->second==0){
    mp.erase(mp.end()->first);
}
int ans=0;
int i=0;
while(i<str.size() && mp.size()!=0)
{
   
    if(str[i]=='N' && mp.find('N')!=mp.end())
    {
        if(mp['N']>0)
            mp['N']--;
        if(mp['N']==0)
        {
            mp.erase('N');
        }
       
    }
    else if(str[i]=='S' && mp.find('S')!=mp.end())
    {
        if(mp['S']>0)
            mp['S']--;
        if(mp['S']==0)
        {
            mp.erase('S');
        }
    }
    else if(str[i]=='E'&& mp.find('E')!=mp.end())
    {
        if(mp['E']>0)
            mp['E']--;
         if(mp['E']==0)
        {
            mp.erase('E');
        }
    }
    else if(str[i]=='W' && mp.find('W')!=mp.end()){
        if(mp['W']>0)
            mp['W']--;

         if(mp['W']==0)
        {
            mp.erase('W');
        }
    }
    ans++;
    i++;
}

if(mp.size()!=0)
    cout<<-1<<"\n";
else
    cout<<ans<<"\n";
return 0;
}