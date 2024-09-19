#include <iostream>
using namespace std;
#define ll long long

ll binpow(ll a, ll n, ll c){
	ll res = 1;
	a %= c;
	while(n != 0){
		//Neu bit cuoi cung cua n la bit 1 
		if(n % 2 == 1){
			res *= (a % c);
			res %= c;
		}
		//Dich phai 1 bit 
		n /= 2;
		//Nhan a voi a
		a *= (a % c);
		a %= c;
	}
	return res;
}

int main(){
	cout << binpow(2, 1000000000000000, 10) << endl;
	cout << binpow(11928128125, 5000000000, 10) << endl;
	return 0;
}
