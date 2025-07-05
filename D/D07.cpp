#include<bits/stdc++.h>
#define inf 1e18
#define int long long
#define var double
#define pii pair<int,int>
using namespace std;

const int N = 2e5;

int x[N+5], h[N+5];

void mains(){
    int n; cin>>n;
    for(int i=0;i<n && cin>>x[i];i++);
    for(int i=0;i<n && cin>>h[i];i++);
    for(int i=0;i<=2*n-2;i++){
        int y = 0;
        for(int j=0;j<=i;j++){
            y += x[j]*h[i-j];
        }
        cout<<y<<' ';
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--) mains();
}