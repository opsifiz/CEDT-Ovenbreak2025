#include<bits/stdc++.h>
#define int long long
#define var double
using namespace std;

const int N = 2e5;

int a[N+5], x;
var avg = 0;

void mains(){
    int n; cin>>n;
    for(int i=1;i<=n && cin>>a[i];i++){
        avg += a[i]*1.0;
    }
    avg /= n;
    var mx = 0;
    for(int i=1;i<=n;i++){
        var d = abs(a[i]-avg);
        if(d > mx){
            mx = d;
            x = a[i];
        }else if(d == mx){
            x = max(x,a[i]);
        }
    }
    cout<<x;
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--) mains();
}