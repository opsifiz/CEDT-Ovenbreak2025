#include<bits/stdc++.h>
#define inf 1e18
#define int long long
#define var double
#define pii pair<int,int>
using namespace std;

const int N = 1000;

map<int,int> mp;

void mains(){
    int n;
    cin>>n;
    while(n--){
        string s; cin>>s;
        for(char c : s) mp[c-'0']++;
    }
    int q; cin>>q;
    while(q--){
        int x; cin>>x;
        cout<<x<<": "<<mp[x]<<'\n';
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--) mains();
}