#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e4, mod = 1e9+7;

int dp[N+5][2];

int32_t main(){
    // ios_base::sync_with_stdio(0); cin.tie(0);
    dp[0][0] = dp[1][0] = 1;
    dp[1][0] = dp[1][1] = 1;
    dp[2][0] = dp[2][1] = 2;
    int n; cin>>n;
    // int n = 10;
    for(int i=3;i<=n;i++){
        dp[i][0] = dp[i-1][0] + dp[i-2][0] + dp[i-2][1]*2;
        dp[i][1] = dp[i-1][0] + dp[i-1][1];
    }
    cout<<dp[n][0];
}
/*
1  1
2  2
3  5
4  11
5  24
6  53
7  117
8  258
9  569
10 1255
*/