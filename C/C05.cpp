#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e6;

set<int> p;
int vis[N+5];

void init(){
    for(int i=2;i<=N;i++){
        if(vis[i]) continue;
        p.insert(i);
        for(int j=i*i;j<=N;j+=i){
            vis[j] = 1;
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    // init();
    int n; cin>>n;
    int sum = 0, p = 1;
    for(int i=1;i<=n;i++){
        p *= i;
        sum += p;
    }
    cout<<sum;
}