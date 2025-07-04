#include<bits/stdc++.h>
#define int long long
#define inf 1e18
#define var double
using namespace std;

const int D = 20;

int dp[10][D+5];

void init(){
    for(int i=1;i<=9;i++){
        dp[i][0] = 1;
        for(int j=1;j<=D;j++){
            dp[i][j] = i*dp[i][j-1];
        }
    }
}

int cal(int x){
    if(x < 10) return 0;
    int res = 0;
    string s = to_string(x);
    int n = s.size();

    for(int i=2;i<n;i++){
        for(int j=1;j<=9;j++){
            res += dp[j][i-1];
        }
    }
    for(int i=1;i<s[0]-'0';i++) res += dp[i][n-1];
    bool valid = 1;
    for(int i=1;i<n;i++){
        for(int j=0;j<min(s[i],s[0])-'0';j++){
            res += dp[s[0]-'0'][n-i-1];
        }
        if(s[i]-'0' >= s[0]-'0'){
            valid = 0;
            break;
        }
    }
    res += valid;
    return res;
}

void mains(){
    int l, r;
    cin>>l>>r;
    cout<<cal(r)-cal(l-1)<<'\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    init();
    int tc = 1;
    cin>>tc;
    while(tc--) mains();
}