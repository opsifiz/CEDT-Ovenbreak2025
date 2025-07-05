#include<bits/stdc++.h>
#define inf 1e18
#define int long long
#define var double
#define pii pair<int,int>
using namespace std;

const int N = 1000;

int a[N+5];
int dp[N+5][N+5];

void mains(){
    string s; cin>>s;
    int n = s.size(); s = ' '+s;
    for(int sz=1;sz<=n;sz++){
        for(int l=1;l+sz-1<=n;l++){
            int r = l+sz-1;
            if(l == r) dp[l][r] = 1;
            else if(sz == 2) dp[l][r] = (s[l]==s[r]);
            else dp[l][r] = s[l]==s[r] && dp[l+1][r-1];
        }
    }
    int q; cin>>q;
    while(q--){
        int l, r;
        cin>>l>>r;
        cout<<s.substr(l+1,r-l+1)<<": "<<(dp[l+1][r+1]?("Yes\n"):("No\n"));
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--) mains();
}