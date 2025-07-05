#include<bits/stdc++.h>
#define inf 1e18
#define int long long
#define var double
#define pii pair<int,int>
using namespace std;

void mains(){
    string s;
    int n;
    cin>>n;
    while(cin>>s){
        for(char c : s){
            if(isdigit(c)){
                cout<<c;
            }else if(islower(c)){
                cout<<(char)((c+26-n-'a')%26+'a');
            }else if(isupper(c)){
                cout<<(char)((c+26-n-'A')%26+'A');
            }else{
                cout<<c;
            }
        }
        cout<<' ';
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--) mains();
}