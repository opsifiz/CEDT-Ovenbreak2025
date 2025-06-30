#include<bits/stdc++.h>
#define inf 1e18
#define var double
using namespace std;

int main(){
    var sum;
    int mx = -inf, mn = inf;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        sum += x*1.0;
        mx = max(mx,x);
        mn = min(mn,x);
    }
    cout<<ceil(sum/n)+mn+mx;
}