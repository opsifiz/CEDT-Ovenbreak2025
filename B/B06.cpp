#include<bits/stdc++.h>
#define AC cout<<"Ingredient accepted!"
#define WA cout<<"Ingredient rejected!"
using namespace std;

int main(){
    string s, m,i; cin>>s>>m>>i;
    if(s == "spring" || s == "summer"){
        if(m == "full"){
            if(i == "honey" || i == "milk"){
                AC;
            }else{
                WA;
            }
        }else{
            if(m == "new" && i != "chocolate"){
                WA;
            }else{
                AC;
            }
        }
    }else{
        if(s == "autumn" || s == "winter"){
            if(m == "waning" || m == "new"){
                if(i == "chocolate" || i == "milk"){
                    AC;
                }else{
                    WA;
                }
            }else{
                AC;
            }
        }else{
            WA;
        }
    }

}