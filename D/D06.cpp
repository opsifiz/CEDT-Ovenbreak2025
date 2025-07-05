#include<bits/stdc++.h>
#define inf 1e18
#define int long long
#define var double
#define pii pair<int,int>
using namespace std;

const int N = 100;

int dp[2][N+5][N+5];
int board[N+5][N+5];

void mains(){
    int n, m; cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>board[i][j];
            dp[0][i][j] = board[i][j] + dp[0][i][j-1];
            dp[1][i][j] = board[i][j] + dp[1][i-1][j];
        }
    }
    int i, j; cin>>i>>j;
    cout<<dp[0][i][m] + dp[1][n][j] - board[i][j];
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--) mains();
}