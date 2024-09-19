#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;

void sang(ll L, ll  R){
	int prime[R - L + 1];
	for(ll i = L; i <= R; i++){
		prime[i - L] = 1;
	}
	for(ll i = 2; i <= sqrt(R); i++){
		for(ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i){
			prime[j - L] = 0;
		}
	}
	for(ll i = max(2ll, L); i <= R; i++){
		if(prime[i - L]){
			cout << i << ' ';
		}
	}
}

int main(){
	sang(10, 41);
}
