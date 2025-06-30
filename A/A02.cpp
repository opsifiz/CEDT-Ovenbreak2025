#include<bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, d; cin>>a>>b>>c>>d;
  if(c < a) c += 24;
  int d1 = a*60+b;
  int d2 = c*60+d;
  // cout<<d1<<' '<<d2;
  int dt = d2-d1;
  int rhh = dt/60;
  int rmm = dt%60;
  // cout<<rhh<<' '<<rmm<<'\n';
  cout<<rhh<<" hr "<<rmm<<" min until alarm rings.";
}