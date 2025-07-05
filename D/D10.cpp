#include<bits/stdc++.h>
#define int long long
#define var double
#define pii pair<int,int>
using namespace std;

const int N = 2e5;

string board[2+5];
bool vis[2+5][N+5];
queue<pii> q;
pii s;

void mains(){
    while(!q.empty()) q.pop();
    int n=2, m;
    cin>>m;
    for(int i=1;i<=n;i++){
        cin>>board[i];
        board[i] = 'X' + board[i];
        for(int j=1;j<=m;j++){
            vis[i][j] = 0;
            if(board[i][j] == 'S'){
                s = {i,j};
            }
        }
    }
    q.push(s);
    while(!q.empty()){
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        if(vis[i][j]) continue;
        vis[i][j] = 1;
        if(board[i][j] == 'T'){
            cout<<"Yes\n";
            return;
        }
        for(int ii=-1;ii<=1;ii++){
            for(int jj=-1;jj<=1;jj++){
                if(abs(ii)==abs(jj)) continue;
                int nx = i+ii;
                int ny = j+jj;
                if(1 <= nx && nx <= n && 1 <= ny && ny <= m && !vis[nx][ny] && board[nx][ny] != '#'){
                    q.push({nx,ny});
                }
            }
        }
    }
    cout<<"No\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    cin>>tc;
    while(tc--) mains();
}