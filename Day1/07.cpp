#include<bits/stdc++.h>
#define int long long
#define var double
using namespace std;

const var L0 = 13.0725,
          N = 4.80852,
          P = 3.28;

var temp = 3.14159/180.0;
var px, py;

int32_t main(){
  var i, v, l, h, t, d;
  cin>>i>>v>>l>>h;
  cin>>t>>px>>py>>d;
  
  t = t*temp;

  var _1 = cos(t)*px-sin(t)*py;
  var _2 = sin(t)*px+py;

  var sz = sqrt(_1*_1+_2*_2);

  var upper = tan((sz/L0)*P)*i*v;

  int eNd = ceil(exp(N*d));
  var lower = l*(eNd%69)*cbrt(h);

  var res = abs(cbrt(upper/lower));
  res = P*log(res)/log(1.15112);

  res = round(res*1e4)/1e4;

  cout<<res<<" NP";
  // cout<<fixed<<setprecision(12)<<'\n'<<l;
}
/*
400 220 111.2064 55000
45 1359 -85000 3.8

*/
