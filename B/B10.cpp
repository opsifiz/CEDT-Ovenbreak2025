#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int x; cin>>x;
    if(x <= 150000) cout<<fixed<<setprecision(0)<<0;
    else if(x <= 300000) cout<<fixed<<setprecision(0)<<ceil(x*5.0/100.0);
    else if(x <= 500000) cout<<fixed<<setprecision(0)<<ceil(x*10.0/100.0);
    else if(x <= 1000000) cout<<fixed<<setprecision(0)<<ceil(x*15.0/100.0);
    else if(x <= 2000000) cout<<fixed<<setprecision(0)<<ceil(x*20.0/100.0);
    else if(x <= 4000000) cout<<fixed<<setprecision(0)<<ceil(x*25.0/100.0);
    else cout<<fixed<<setprecision(0)<<ceil(x*30.0/100.0);
}