#include <iostream>
#include <math.h>

using namespace std;

#define ll long long

ll powMod(ll a, ll b, ll c){
	ll res = 1;
	while(b){
		if(b % 2 == 1){
			res *= a; res %= c;
		}
		a *= a;
		a %= c;
		b /= 2;
	}
	return res;
}

int main(){
	ll a = 28282828282825, b = 10000000000000000, c = 10;
	cout << powMod(a % c, b, c); // 5
	return 0;
}
