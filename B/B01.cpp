#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    if(t < 160) cout<<"Undercooked";
    else if(160 <= t && t <= 180) cout<<"Perfect";
    else cout<<"Burnt";
}