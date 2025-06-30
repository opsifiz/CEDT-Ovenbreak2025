#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int s; cin>>s;
    if(s >= 85) cout<<"A";
    else if(s >= 80) cout<<"B+";
    else if(s >= 75) cout<<"B";
    else if(s >= 70) cout<<"C+";
    else if(s >= 65) cout<<"C";
    else if(s >= 60) cout<<"D+";
    else if(s >= 50) cout<<"D";
    else cout<<"F";
}