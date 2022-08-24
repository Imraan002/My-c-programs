#include<bits/stdc++.h>
using namespace std;
#define ll long long
 string kPeriodic(string s, int K){
       
       int n = s.size();

       int blck_size = __gcd(n,K);

       int no_of_blck = n/blck_size;

       map<char,int> mpp;

       for(auto k:s)
       {
            mpp[k]++;
       }

       for(auto it:mpp)
       {
            if(it.second%no_of_blck!=0)
                return "-1";
       }

       string str="";
       for(auto it:mpp)
       {
        int times=it.second/no_of_blck;

        while(times--){
            str+=it.first;
        }

       

       }

 string ans="";
 while(no_of_blck--)
        {
            ans+=str;
        }
        return ans;
      
    }
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    

    string str = "abba";

    cout<<kPeriodic(str,2);
    return 0;
}