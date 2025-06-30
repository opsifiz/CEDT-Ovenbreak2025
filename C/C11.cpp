#include<bits/stdc++.h>
using namespace std;

void res(string s, int n){
    cout<<"###"<<string(n,' ')<<s<<string(n,' ')<<"###  ||  ###"<<string(n,' ')<<s<<string(n,' ')<<"###"<<'\n';
}

void l3(string s, int n){
    cout<<"###"<<string(3*n,'-')<<"###  ||  ###"<<string(3*n,'-')<<"###"<<'\n';
    res(s,n);
    cout<<"###"<<string(3*n,'-')<<"###  ||  ###"<<string(3*n,'-')<<"###"<<'\n';
}

void l2(string s, int n){
    cout<<" ###"; for(int i=1;i<=n;i++)cout<<((i&1)?"#*#":"#^#"); cout<<"### || ###"; for(int i=1;i<=n;i++)cout<<((!(i&1))^(n&1)?"#*#":"#^#"); cout<<"###"<<'\n';
    l3(s,n);
    cout<<" ###"; for(int i=1;i<=n;i++)cout<<((i&1)?"#*#":"#^#"); cout<<"### || ###"; for(int i=1;i<=n;i++)cout<<((!(i&1))^(n&1)?"#*#":"#^#"); cout<<"###"<<'\n';
}

void l1(string s, int n){
    cout<<"  ###"; for(int i=1;i<=n;i++)cout<<((i&1)?"^#^":"*#*"); cout<<"###||###"; for(int i=1;i<=n;i++)cout<<((!(i&1))^(n&1)?"^#^":"*#*"); cout<<"###"<<'\n';
    l2(s,n);
    cout<<"  ###"; for(int i=1;i<=n;i++)cout<<((i&1)?"^#^":"*#*"); cout<<"###||###"; for(int i=1;i<=n;i++)cout<<((!(i&1))^(n&1)?"^#^":"*#*"); cout<<"###"<<'\n';
}

int main(){
    string s;
    getline(cin,s);
    // cin>>s;
    int n = s.size();
    l1(s,n);
}