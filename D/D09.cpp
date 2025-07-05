#include<bits/stdc++.h>
#define int long long
#define var double
#define pii pair<int,int>
using namespace std;

const int N = 2e5;

int a[N+5];

void mains(){
    int n, h = 0, sum = 0; cin>>n;
    for(int i=1;i<=n&&cin>>a[i];i++) h = max(h,a[i]);
    for(int i=h;i>=1;i--){
        if(i == 1) cout<<"_";
        else cout<<" ";
        for(int j=1;j<=n;j++){
            int w = a[j];
            if(a[j] >= i){
                cout<<string(i-1,' ')<<"/"<<string((a[j]-i)*2,' ')<<"\\"<<string(i-1,' ');
            }else{
                cout<<string(2*a[j],' ');
            }
            if(i == 1) cout<<"_";
            else cout<<" ";
        }
        cout<<'\n';
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--) mains();
}