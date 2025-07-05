#include<bits/stdc++.h>
#define inf 1e18
#define int long long
#define var double
#define pii pair<int,int>
using namespace std;

void mains(){
    string s, t;
    cin>>s>>t;
    if(s.size() < t.size()) swap(s,t);
    if(s.size() == t.size()){
        if(s == t){
            cout<<"Yes\n";
        }else{
            int cnt = 0;
            for(int i=0;i<s.size();i++){
                cnt += s[i] != t[i];
            }
            if(cnt <= 1){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
        }
    }else if(s.size()-t.size() == 1){
        int i=0, j=0, n = s.size(), m = t.size();
        bool f = 1;
        while(i<n && j<m){
            if(s[i] == t[j]){
                i++;
                j++;
            }else if(f){
                i++;
                f = 0;
            }else{
                cout<<"No\n";
                return;
            }
        }
        cout<<"Yes\n";
        // for(int i=0;i<s.size();i++){
        //     string temp = s.substr(0,i) + s.substr(i+1);
        //     if(temp == t){
        //         cout<<"Yes\n";
        //         return;
        //     }
        // }
        // cout<<"No\n";
    }else{
        cout<<"No\n";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    cin>>tc;
    while(tc--) mains();
}