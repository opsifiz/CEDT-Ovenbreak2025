#include<bits/stdc++.h>
#define inf 1e18
#define int long long
using namespace std;

int score[2][4];

void mains(){
    string id[2];
    cin>>id[0]>>id[1];
    for(int i=0;i<2;i++) for(int j=0;j<3&&cin>>score[i][j];j++) score[i][3] += score[i][j];
    if(score[0][3] != score[1][3]) cout<<"Win: "<<id[score[0][3]<score[1][3]];
    else if(score[0][0] != score[1][0]) cout<<"Win: "<<id[score[0][0]<score[1][0]];
    else if(score[0][2] != score[1][2]) cout<<"Win: "<<id[score[0][2]<score[1][2]];
    else if((id[0][2]=='3') ^ (id[1][2]=='3')) cout<<"Win: "<<id[id[0][2]!='3'];
    else if((id[0].substr(8,2)=="21") ^ (id[1].substr(8,2)=="21")) cout<<"Win: "<<id[id[0].substr(8,2)!="21"];
    else if(id[0].substr(0,2) != id[1].substr(0,2)) cout<<"Win: "<<id[id[0].substr(0,2) > id[1].substr(0,2)];
    else cout<<"No one.";
}

int32_t main(){
    int tc = 1;
    // cin>>tc;
    while(tc--) mains();
}