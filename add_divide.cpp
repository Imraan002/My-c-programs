#include <bits/stdc++.h>
using namespace std;

long long hcf(long long a, long long b){
    if(b==0) return a;
    return hcf(b, a%b);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;
    //tc = 1;
    while(tc--){
    long long a, b;
    cin >> a >> b;
    long long h;
    do{
        h = __gcd(a,b);
        a = a/h;
    }while(h!=1);
    if(a>1) cout << "No\n";
    else cout << "Yes\n";   }
    return 0;
}