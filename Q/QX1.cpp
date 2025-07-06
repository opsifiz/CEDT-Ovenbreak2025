#include<bits/stdc++.h>
#define int long long
#define pcc pair<char,char>
using namespace std;

void sol1(){
	float a; int b;
	cin>>a>>b;
	cout<<(int)(a*b);
}

void sol2(){
	int s; cin>>s;
	if(s > 84) cout<<"A";
	else if(80 <= s && s <= 84) cout<<"B+";
	else if(75 <= s && s <= 79) cout<<"B";
	else if(70 <= s && s <= 74) cout<<"C+";
	else if(65 <= s && s <= 69) cout<<"C";
	else if(60 <= s && s <= 64) cout<<"D+";
	else if(50 <= s && s <= 59) cout<<"D";
	else if(s < 50){
		cout<<"F";
	}
}

void sol3(){
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		cout<<string(i,'*');
		if(i%3==0 || i%11==0) cout<<" Ti amo";
		cout<<'\n';
	}
}

void sol4(){
	int n; cin>>n;
	int x;
	map<int,int> mp;
	for(int i=0;i<n && cin>>x;i++) mp[x]++;
	int idx; cin>>idx;
	cout<<mp[idx];
}

int32_t main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int tc; cin>>tc;
	if(tc == 1) sol1();
	else if(tc == 2) sol2();
	else if(tc == 3) sol3();
	else if(tc == 4) sol4();
	else{
		for(;;);
	}
}
