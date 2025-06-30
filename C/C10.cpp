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
    init();
    int n, sum = 0; cin>>n;
    for(int x : p){
        while(n%x==0 && n != 1){
            sum += x;
            n /= x;
        }
        if(n == 1){
            break;
        }
    }
    cout<<sum;
}