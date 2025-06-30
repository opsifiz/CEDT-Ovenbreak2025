#include<bits/stdc++.h>
using namespace std;

int main(){
  double c, m, l; cin>>c>>m>>l;
  double val = ceil((c*c+log(m+1))*exp(l/(c+1)));
  cout<<fixed<<setprecision(2)<<val<<'\n';
}