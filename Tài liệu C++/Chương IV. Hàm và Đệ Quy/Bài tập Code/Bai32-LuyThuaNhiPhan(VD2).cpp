#include <iostream>
using namespace std;
#define ll long long

ll binpow(ll a, ll n){
	ll res = 1;
	while(n != 0){
		//Neu bit cuoi cung cua n la bit 1 
		if(n % 2 == 1){
			res *= a;
		}
		//Dich bit 
		n /= 2;
		//Nhan a voi a
		a = a * a;
	}
	return res;
}

int main(){
	cout << binpow(2, 10) << endl;
	cout << binpow(2, 50) << endl;
	return 0;
}
