#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int x; cin>>x;
    if(x < 0) cout<<"year cannot be negative";
    else if(x%4 == 0){
        if(x%100 == 0){
            if(x%400 == 0){
                cout<<"leap year";
            }else{
                cout<<"not leap year";
            }
        }else{
            cout<<"leap year";
        }
    }else{
        cout<<"not leap year";
    }
}