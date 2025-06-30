#include<bits/stdc++.h>
#define inf 1e18
#define var double
#define AC cout<<"It can jump over."
#define WA cout<<"It can't jump over."
using namespace std;

int main(){
    var s, h, w;
    cin>>s>>h>>w;
    bool weak = h<100 || w>200;
    if(weak) cout<<"It too weak.";
    else if(!weak && s>100) AC;
    else if(!weak && s<100) WA;
}