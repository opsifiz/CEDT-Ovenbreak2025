#include<bits/stdc++.h>
#define int long long
#define inf 1e18
using namespace std;

const int N = 120, mod = 1e4+7;


bool vis[N+5][2];
int v[N+5][2];

void mains(){
    int n, a, b;
    cin>>n>>a>>b;
    int te = a, mp = b;
    int aa = 0, bb = 1;
    int resA = 0, resB = 1;
    int mx = 0;
    int l = 0, r = 0;
    for(int i=1;i<=n;i++){
        cin>>v[i][0]>>v[i][1];
        if(v[i][aa]>0){te--; vis[i][aa]=1; resA = ((resA%mod)+(v[i][aa]%mod))%mod;}
        if(v[i][bb]>0){mp--; vis[i][bb]=1; resB = ((resB%mod)*(v[i][bb]%mod))%mod;}
        if(te == 0){aa ^= 1; te = a;}
        if(mp == 0){bb ^= 1; mp = b;}
        if(!vis[i][0]) l += 1;
        else l = 0;
        if(!vis[i][1]) r += 1;
        else r = 0;
        mx = max({mx,l,r});
    }
    if(resB == 1) resB = 0;
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<2;j++){
    //         cout<<vis[i][j]<<' ';
    //     }
    //     cout<<'\n';
    // }
    cout<<resA<<' '<<resB<<' '<<mx;
}

int32_t main(){
    int tc = 1;
    // cin>>tc;
    while(tc--) mains();
}