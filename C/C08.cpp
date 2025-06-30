#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; char c; cin>>n>>c;
    for(int i=1;i<=n;i++){
        cout<<string(n-i,' ')<<"/"<<string(2*(i-1),c)<<"\\\n";
    }
}