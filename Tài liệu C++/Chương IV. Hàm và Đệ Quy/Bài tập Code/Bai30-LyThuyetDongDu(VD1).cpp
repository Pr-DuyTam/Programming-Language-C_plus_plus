#include <iostream>
#include <math.h>
using namespace std;

#define ll long long

int powMod(int a, int b){
	ll res = 1;
	for(int i = 1; i <= b; i++){
		res *= (a % 10);
		res %= 10; //quan trong
	}
	return res;
}

int main(){
	cout << powMod(2, 10) << endl; // 1024 
	cout << powMod(2, 30) << endl; // 1073741824 
	cout << powMod(2, 61) << endl; // 2305843009213693952
	cout << powMod(2, 1000000) << endl; 
	return 0;
}
