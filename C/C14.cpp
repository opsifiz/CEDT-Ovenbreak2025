#include<bits/stdc++.h>
#define inf 1e18
#define int long long
#define var double
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int x, y, z; cin>>x>>y>>z;
    while(y > 0){
        while(x%2 > y%4){
            x += 2;
            y = x/2;
            if(z < y+2){
                z += 3;
            }else{
                continue;
            }
        }
        y -= 2;
    }
    y = z+3;
    z = 5+x;
    cout<<x<<' '<<y<<' '<<z;
}