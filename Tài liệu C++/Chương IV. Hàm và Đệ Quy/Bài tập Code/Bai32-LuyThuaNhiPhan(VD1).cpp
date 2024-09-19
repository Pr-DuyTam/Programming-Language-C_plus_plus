#include <iostream>

using namespace std;

#define ll long long

ll binpow(int a, int n){
	if(n == 0){
		return 1;
	}
	ll X = binpow(a, n / 2); // a^(n/2)
	if(n % 2 == 1){
		return X * X * a;
	}
	else{
		return X * X;
	}
}

int main(){
	cout << binpow(2, 10) << endl;
	cout << binpow(2, 50) << endl;
	return 0;
}
