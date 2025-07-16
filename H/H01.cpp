#include<bits/stdc++.h>
#define int long long
using namespace std;

int n, x, y, k, p;

void mains(){
    cin>>n>>x>>y>>k>>p;
    if(k == 1){
        cout<<0<<'\n';
        return;
    }
    unsigned int n2 = n*(n+1)*(n+2)/6;
    n2 %= k;
    int res = 0;
    res = (res+x)%k;
    res = (res+y)%k;
    res = (res+((2*x*y)%k))%k;
    res = (res*n2)%k;
    // res = (res*n);
    // res = (res*(n+1));
    // res = (res*(n+2));
    // res /= 6;
    res %= k;
    res = (res+n)%k;
    int sigma_binom = 1;
    if(n > 1) sigma_binom = 3;
    sigma_binom *= p;
    sigma_binom %= k;
    res = (res+sigma_binom)%k;
    int rd = (((n*(n+1)/2)%k)*((n*(n+1)/2)%k))%k;
    res = (res+rd)%k;
    cout<<res<<'\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    cin>>tc;
    while(tc--) mains();
}