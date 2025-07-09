#include<bits/stdc++.h>
#define int long long
#define pii pair<int,int>
#define pipii pair<int,pii>
using namespace std;

const int N = 3000;

int dp[2][N+5];
vector<pii> good, bad;

void mains(){
    int W, N;
    cin>>W>>N;
    for(int i=1;i<=N;i++){
        int temp, mode, v;
        cin>>temp>>mode>>v;
        if(mode == 1) bad.push_back({temp,v});
        else         good.push_back({temp,v});
    }
    //solve sad song
    for(auto temp : bad){
        int w = temp.first;
        int v = temp.second;
        for(int i=W;i>0;i--){
            dp[0][i] = dp[0][i-1];
            if(i-w >= 0){
                dp[0][i] = max(dp[0][i],dp[0][i-w]+v);
            }
        }
    }
    //solve happy song
    for(auto temp : good){
        int w = temp.first;
        int v = temp.second;
        for(int i=W;i>0;i--){
            dp[1][i] = dp[1][i-1];
            if(i-w >= 0){
                dp[1][i] = max(dp[1][i],dp[1][i-w]+v);
            }
        }
    }
    //find best
    int mx = 0;
    for(int i=1;i<=W;i++){
        mx = max(mx,min(dp[0][i],dp[1][W-i]));
        // cout<<i<<' '<<dp[0][i]<<' '<<dp[1][W-i]<<'\n';
    }
    cout<<mx;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--) mains();
}