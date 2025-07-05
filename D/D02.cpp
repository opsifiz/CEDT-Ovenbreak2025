#include<bits/stdc++.h>
#define inf 1e18
#define int long long
#define var double
#define pii pair<int,int>
using namespace std;

const int N = 2e5;

pii a[N+5];

void mains(){
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        int l, t;
        cin>>l>>t;
        a[i] = {l,t};
    }
    int q; cin>>q;
    int u, v; cin>>u;
    int sum = 0;
    while(--q){
        cin>>v;
        cout<<"T"<<u<<": "<<a[u].second<<'\n';
        cout<<"L"<<v<<": "<<a[v].first<<'\n';
        sum += a[u].second + a[v].first;
        u = v;
    }
    cout<<"Total : "<<sum;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--) mains();
}