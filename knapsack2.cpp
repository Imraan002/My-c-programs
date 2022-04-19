#include<bits/stdc++.h>
using namespace std;
int weight[105], value[105];
 
long long int dp[105][100005];
 
long long int func(int idx, int val){
    if(val == 0) return 0;
    if(idx < 0) return INT_MAX;
    if(dp[idx][val] != -1) return dp[idx][val];
    // Dont choose
    long long int ans = func(idx - 1, val);
    // Choose
    if(val - value[idx] >= 0)
    ans = min(ans, func(idx - 1, val - value[idx]) + weight[idx]);
    return dp[idx][val] = ans;
}
 
 
int main(){
    
    int n, wt;
    cin >> n >> wt;
    for(int i = 0; i < n; i++){
        cin >> weight[i] >> value[i];
    }
 	 memset(dp, -1, sizeof(dp));
    int max_value = 1e5;
    for(int i = max_value; i >= 0; i--){
        if(func(n-1, i) <= wt){
            cout << i << endl;
            break;
        }
    }
 
}