#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a, b, m; cin>>a>>b>>m;
    if(m == 1){
        cout<<a+b;
    }else if(m == 2){
        cout<<a-b;
    }else if(m == 3){
        cout<<a*b;
    }else{
        if(b == 0){
            cout<<"cannot divide by zero";
        }else{
            if(m == 4){
                cout<<a/b;
            }else if(m == 5){
                cout<<a%b;
            }
        }
    }
}