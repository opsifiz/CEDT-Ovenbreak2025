#include<bits/stdc++.h>
using namespace std;

const int N = 200;

int idx[N+5];

void mains(){
    int n, rep = 1; cin>>n;
    vector<string> temp;
    string s;
    int ind = 0, i = 0;
    while(cin>>s){
        if(s == "!") break;
        temp.push_back(s);
        if(s.size() == 3){
            idx[++ind] = i;
        }
        i++;
    }
    idx[ind+1] = i;

    for(int x=1;x<=n;x++){
        // cout<<"x = "<<x<<" : ";
        if(temp[idx[x]] == "oii"){
            for(int j=idx[x]+1;j<idx[x+1]-3;j++){
                for(int r=0;r<rep;r++){
                    cout<<temp[j]<<' ';
                }
            }
            // cout<<'\n';
        }else{
            for(int j=idx[x]+1;j<idx[x+1];j++){
                if(temp[j] == "a") rep++;
                else if(temp[j] == "o") rep--;
                rep = max(1,rep);
            }
        }
        // cout<<'\n';
    }
    // cout<<"\n[DEBUG] : "<<temp[idx[6]]<<'\n';
    // for(int j=idx[n]+1;j<idx[n+1]-3;j++){
    //     cout<<temp[j]<<' ';
    // }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--){
        mains();
    }
}

/*
6
oii a o i o i i i
oia o i a o a a i o i
oii o i i i
oii a i o i i o a i i i
oia i i o i
oii i o a i i i
*/