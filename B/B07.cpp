#include<bits/stdc++.h>
#define inf 1e18
#define int long long
using namespace std;

const int N = 1e5;

bool vis[N+5];

int get(int x){
    int l = 1, r = N;
    while(l<r){
        int mid = l+(r-l)/2;
        int sum = mid*mid;
        if(x <= sum){
            r = mid;
        }else{
            l = mid+1;
        }
    }
    return r;
}

void mains(){
    int s, e;
    cin>>s>>e;
    if(s>e) swap(s,e);
    int des_layer = get(e);
    int cnt = 0;
    queue<pair<int,pair<int,int>>> q;
    int i = get(s);
    int j = s-(i-1)*(i-1);
    // cout<<i<<' '<<j<<'\n';
    q.push({s,{i,j}});
    while(!q.empty()){
        int _ = q.size();
        while(_--){
            int u = q.front().first;
            int i = q.front().second.first;
            int j = q.front().second.second;
            q.pop();
            if(vis[u]) continue;
            vis[u] = 1;
            // cout<<u<<' ';
            if(u == e){
                // cout<<'\n';
                cout<<cnt;
                return;
            }
            if(j>1) q.push({u-1,{i,j-1}});
            if(j<2*i-1) q.push({u+1,{i,j+1}});
            if(j&1) q.push({u+2*i,{i+1,u+2*i-i*i}});
        }
        // cout<<'\n';
        cnt++;
    }
}

int32_t main(){
    int tc = 1;
    // cin>>tc;
    while(tc--) mains();
}