#include<bits/stdc++.h>
#define int long long
using namespace std;

void mains(){
	int x, y, z;
	cin>>x>>y>>z;
	if(x<50){
		do{
			if(y <= z){
				cout<<x<<' '<<y<<' '<<z;
				return;
			}
			while(y&1){
				x = x-(y-z);
				y = y+1;
				if(y <= z){
					cout<<x<<' '<<y<<' '<<z;
					return;
				}
			}
			x += y*y+z*z;
			if(x%10 == 4){
				break;
			}
			if(x%3==0){
				y--;
			}else{
				z++;
			}
		}while(x/(y+z) <= 15);
	}else{
		if(x > y){
			if(x%2==0){
				x = x*2;
				y = x+4;
				z = (y-x)*3;
			}else{
				if(y<z){
					x = x+y;
					y = x*3;
					z = y+z;
				}else{
					x = x/2;
					y = y*2;
					z = x-y;
				}
			}
		}else{
			if(z%3==2){
				x = y*5;
				y = x/2;
				z = y+7;
			}else{
				if(y>z){
					x = x+z;
					y = y-3;
					z = x*2;
				}else{
					x = x-1;
					y = y+z;
					z = y-4;
				}
			}
		}
	}
	cout<<x<<' '<<y<<' '<<z;
}

int32_t main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int tc = 1;
//	cin>>tc;
	while(tc--) mains();
}
