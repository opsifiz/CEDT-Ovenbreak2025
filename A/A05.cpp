#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
  int scale, speed; cin>>scale>>speed;
  int y1, x1, y2, x2; cin>>y1>>x1>>y2>>x2;
  // y1 = abs(y1);
  // y2 = abs(y2);
  // x1 = abs(x1);
  // x2 = abs(x2);
  int x = x1+x2;
  int y = y1+y2;
  // cout<<x<<' '<<y<<'\n'; 
  double dis = scale*sqrt(x*x+y*y);
  double time = dis/(speed*1.0*18/5);
  // cout<<dis<<' ';
  cout<<(int)time<<" hr "<<ceil((time-(int)time)*60)<<" min";
}
/*
50 69
3 10 -6 -2

30 55
0 -3 -2 -1
*/