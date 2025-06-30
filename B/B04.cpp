#include<bits/stdc++.h>
using namespace std;

const int n = 4;
int x;

map<string,int> mp, ord;
string order[n+5];
int pole[n+5];
string name[n+5];

int main(){
    cin>>x;
    for(int i=1;i<=n&&cin>>name[i];i++) mp[name[i]] = i;
    for(int i=1;i<=n;i++) order[i] = name[i];
    sort(order+1,order+n+1);
    for(int i=1;i<=n;i++){
        // cout<<order[(i-2+x)%n+1]<<' '<<mp[order[(i-2+x)%n+1]]<<'\n';
        pole[mp[order[(i-2+x)%n+1]]] = i;
    }
    // cout<<'\n';
    // for(int i=1;i<=n;i++) cout<<pole[i]<<' '; cout<<'\n';
    bool a = (pole[2]==1 || x==1)&&(pole[3]<pole[4]),
         b = pole[3]>pole[2] && pole[3]<pole[1] && pole[4]!=3,
         c = ((a^b) && pole[1]>pole[4]) || pole[2]!=4;
    bool flag = c && (pole[4]<pole[2] || pole[1]<pole[3]);
    if(!flag) cout<<"No Croissant :(";
    else{ cout<<"CROISSANT with ordering:"; for(int i=1;i<=n;i++) cout<<' '<<pole[i];}
}