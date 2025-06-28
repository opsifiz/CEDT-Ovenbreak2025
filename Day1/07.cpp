#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
  string s; int l, r; cin>>s>>l>>r;
  cout<<s<<" has "<<4*((r-l+1)*(l+r)/2)<<" attackable tiles.";
}