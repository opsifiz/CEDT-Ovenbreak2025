#include<bits/stdc++.h>
#define int long long
#define var double
#define pcc pair<char,char>
using namespace std;

const int N = 2e5;

int a[N+5];
int aa=0, bb=0;

void mains(){
	int n, x, y;
	cin>>n>>x>>y;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i+=x) aa++;
	for(int i=n-1;i>=0;i-=y) bb++;
	int m = min(aa,bb);
	vector<int> p, q;
	for(int i=0, cnt=0;i<n && cnt<m;i+=x, cnt++) p.push_back(a[i]);
	for(int j=n-1, cnt=0;j>=0 && cnt<m;j-=y, cnt++) q.push_back(a[j]);
	var a1=0, a2=0, a3=0;
	for(int i=0;i<m;i++){
//		cout<<p[i]<<' '<<q[i]<<'\n';
		a1 += (p[i]*q[i])*1.0;
	}
	sort(p.begin(),p.end());
	sort(q.begin(),q.end());
	if(m%2==0){
		a2 = (p[m/2-1]+p[m/2])*1.0/2;
		a3 = (q[m/2-1]+q[m/2])*1.0/2;
	}else{
		a2 = p[m/2]*1.0;
		a3 = q[m/2]*1.0;
	}
	cout<<fixed<<setprecision(2)<<a1/m<<' '<<a2<<' '<<a3;
}

int32_t main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
//	init();
	int tc = 1;
//	cin>>tc;
	while(tc--) mains();
}
