#include<bits/stdc++.h>
#define int long long
#define var double
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    var x; char c;
    int w;
    cin>>x>>c>>w;
    map<char,int> mp;
    mp['t'] = 1000000;
    mp['k'] = 1000;
    mp['g'] = 1;
    int r = x*mp[c];
    if(r == w) cout<<"Perfect";
    else if(95.0/100*r <= w && w <= 105.0/100*r) cout<<"Pretty Good";
    else if(w < 95.0/100*r) cout<<"Add More";
    else if(w > 105.0/100*r) cout<<"Too Much";
}