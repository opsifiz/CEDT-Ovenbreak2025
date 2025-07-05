#include<bits/stdc++.h>
#define int long long
#define var double
#define pii pair<int,int>
using namespace std;

const int N = 2e5;

vector<int> a(5), b = {1,2,3,4,5};
bool vis[N+5];

void mains(){
    int n = 5, cnt = 0;
    bool flag = 0;
    for(int i=0;i<n && cin>>a[i];i++);
    if(a == b){
        cout<<"Yes\n";
        return;
    }
    for(int i=1;i<n;i++){
        swap(a[i-1],a[i]);
        if(a == b){
            cout<<"Yes\n";
            return;
        }
        swap(a[i-1],a[i]);
    }
    cout<<"No\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    cin>>tc;
    while(tc--) mains();
}