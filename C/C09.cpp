#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e4;

int dp[N+5];
int sum = 0;

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin>>n;
    sum = 1;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
        sum += dp[i];
    }
    cout<<sum;
}