#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1000;

int n, m, r;
int board[N+5][N+5], qs[N+5][N+5];

void mains(){
    cin>>m>>n>>r;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            char c; cin>>c;
            qs[i][j] = qs[i-1][j] + qs[i][j-1] - qs[i-1][j-1];
            if(isdigit(c)){
                board[i][j] = c-'0';
            }else{
                board[i][j] = -1;
                qs[i][j]++;
            }
        }
    }
    int res = 0, sum = 0;
    for(int i=1;i<=n;i++){
        if(i&1){
            for(int j=1;j<=m;j++){
                if(board[i][j] == -1){
                    int cnt = qs[min(n,i+1)][min(m,j+1)]-qs[max(0LL,i-2)][min(m,j+1)]-qs[min(n,i+1)][max(0LL,j-2)]+qs[max(0LL,i-2)][max(0LL,j-2)];
                    if(cnt >= 4){
                        res += sum*r;
                    }else{
                        res += sum/r;
                    }
                    sum = 0;
                }else{
                    sum += board[i][j];
                }
            }
        }else{
            for(int j=m;j>0;j--){
                if(board[i][j] == -1){
                    int cnt = qs[min(n,i+1)][min(m,j+1)]-qs[max(0LL,i-2)][min(m,j+1)]-qs[min(n,i+1)][max(0LL,j-2)]+qs[max(0LL,i-2)][max(0LL,j-2)];
                    if(cnt >= 4){
                        res += sum*r;
                    }else{
                        res += sum/r;
                    }
                    sum = 0;
                }else{
                    sum += board[i][j];
                }
            }
        }
    }
    cout<<res;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--) mains();
}

/*
10 6 8
4 1 8 L 9 1 L 5 L 0
L L 6 5 8 0 3 6 3 2
1 L 3 L 0 0 2 L 2 3
L 6 L 0 1 L L 4 L 2
4 9 L 3 4 9 7 9 4 0
1 L L 5 2 7 L 6 8 0
*/