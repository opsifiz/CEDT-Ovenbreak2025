#include<bits/stdc++.h>
#define int long long
#define pcc pair<char,char>
using namespace std;

const int N = 5;
map<char,int> mp;
pair<char,char> c[N+5];

void init(){
	mp['2'] = 2;
	mp['3'] = 3;
	mp['4'] = 4;
	mp['5'] = 5;
	mp['6'] = 6;
	mp['7'] = 7;
	mp['8'] = 8;
	mp['9'] = 9;
	mp['x'] = 10;
	mp['J'] = 11;
	mp['Q'] = 12;
	mp['K'] = 13;
	mp['A'] = 14;
}

bool cmp(pcc a, pcc b){
	if(a.first == b.first){
		return a.second < b.second;
	}
	return mp[a.first] < mp[b.first];
}

map<char,int> s1, s2;

void mains(){
	int n = 5;
	for(int i=1;i<=n;i++){
		string num;
		char stage;
		cin>>num>>stage;
		if(num == "10") num = 'x';
		c[i] = {num[0],stage};
		s1[num[0]]++;
		s2[stage]++;
	}
	sort(c+1,c+n+1,cmp);
//	for(int i=1;i<=n;i++){
//		cout<<c[i].first<<' '<<c[i].second<<'\n';
//	}
	for(auto s : s2){
		if(s.second == 5){
			bool sss = 1;
			for(int i=2;i<=n;i++){
				if(mp[c[i-1].first]+1 != mp[c[i].first]){
					sss = 0;
					break;
				}
			}
			if(sss && c[n].first == 'A'){
				cout<<"royal flush";
			}else if(sss){
				cout<<"straight flush";
			}else{
				cout<<"flush";
			}
			return;
		}
	}
	bool _4 = 0, _3=0, _2=0;
	int _22 = 0;
	for(auto s : s1){
		if(s.second == 4) _4 = 1;
		if(s.second == 3) _3 = 1;
		if(s.second == 2){_2=1, _22++;}
	}
	bool ss = 1;
	for(int i=2;i<=n;i++){
		if(mp[c[i-1].first]+1 != mp[c[i].first]){
			ss = 0;
			break;
		}
	}
	if(_3 && _2){
		cout<<"full house";
	}else if(ss){
		cout<<"straight";
	}else if(_4){
		cout<<"four of a kind";
	}else if(_3){
		cout<<"three of a kind";
	}else if(_22 == 2){
		cout<<"two pair";
	}else if(_2){
		cout<<"pair";
	}else{
		cout<<"high card";
	}
}

int32_t main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	init();
	int tc = 1;
//	cin>>tc;
	while(tc--) mains();
}
