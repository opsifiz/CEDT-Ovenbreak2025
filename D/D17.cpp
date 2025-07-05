#include<bits/stdc++.h>
#define inf 1e18
#define int long long
#define var double
#define pii pair<int,int>
using namespace std;

const int N = 1000;

int board[N+5][N+5];
int good, bad, decent;

void mains(){
    int n, m; cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>board[i][j];
        }
    }
    int a, b, mn = inf, mx = -inf; cin>>a>>b;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            mn = min(mn,board[i][j]);
            mx = max(mx,board[i][j]);
            good += (board[i][j] < a);
            decent += (a <= board[i][j] && board[i][j] < b);
            bad += (board[i][j] >= b);
        }
    }
    cout<<"Good: "<<good<<"\n";
    cout<<"Decent: "<<decent<<"\n";
    cout<<"Bad: "<<bad<<"\n";
    cout<<"Min: "<<mn<<"\n";
    cout<<"Max: "<<mx<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--) mains();
}