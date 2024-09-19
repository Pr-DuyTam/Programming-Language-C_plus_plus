#include <iostream>

using namespace std;

#define ll long long

int legendre(int n, int p){
	int res = 0;
	for(int i = p; i <= n; i *= p){
		res += n / i;
	}
	return res;
}

int main(){
	cout << "Bac cua 3 trong 35 ! : " << legendre(35, 3) << endl;
	cout << "Bac cua 17 trong 1000000! : " << legendre(1000000, 17) << endl;
	return 0;
}
