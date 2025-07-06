#include<bits/stdc++.h>
#define int long long
using namespace std;

void sol1(string s){
	int i=0, n = s.size();
	string res = "";
	while(i<n){
		int st = i;
		while(i<n && s[st]==s[i]) i++;
		cout<<i-st<<s[st];
		st = i;
	}
	cout<<res;
}

void sol2(string s){
	int n = s.size();
	for(int i=0;i<n;i+=2){
		int cnt = s[i]-'0';
		char c = s[i+1];
		cout<<string(cnt,c);
	}
}

void mains(){
	string s; cin>>s;
	if(isdigit(s[0])) sol2(s);
	else sol1(s);
}

int32_t main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int tc = 1;
//	cin>>tc;
	while(tc--) mains();
}
