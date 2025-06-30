#include<bits/stdc++.h>
#define inf 1e18
#define var double
using namespace std;

void mains(){
    int n; cin>>n;
    int N = 0;
    var price = 0;
    for(int i=1;i<=n;i++){
        int x, val;
        cin>>x>>val;
        N += x;
        price += x*val;
    }
    bool _1 = 0, _2 = 0;
    if(N >= 2*n){
        _1 = 1;
        price = 0.97*price;
        if(N > 14 && price > 25){
            price -= 10;
        }
    }
    else if(N <= 20 && price<500){
        _2 = 1;
        price += 600;
    }
    if(!_1 && !_2){
        price = price-n*0.35;
    }
    cout<<floor(price);
}

int main(){
    int tc = 1;
    // cin>>tc;
    while(tc--) mains();
}