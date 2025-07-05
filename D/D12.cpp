#include<bits/stdc++.h>
#define int long long
#define var double
#define pii pair<int,int>
using namespace std;

const int N = 2e5;

bool isSort(vector<int> a){
    vector<int> b = a;
    sort(b.begin(),b.end());
    return a==b;
}

void mains(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<((isSort(a)?("sorted!"):("un-sorted!")));
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--) mains();
}