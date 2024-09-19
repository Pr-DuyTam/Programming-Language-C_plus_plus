#include <iostream>
#include <math.h>
using namespace std;

typedef long long ll;

int prime[1000001];

void sang(){
	for(int i = 1; i <= 1000000; i++){
		prime[i] = i;
	}
	for(int i = 2; i <= sqrt(1000000); i++){
		if(prime[i] == i){
			for(int j = i * i; j <= 1000000; j += i){
				if(prime[j] == j){
					prime[j] = i;
				}
			}
		}
	}
}

int main(){
	sang();
	int a[] = {60, 30, 20, 17, 15, 100, 2000, 28};
	for(int i = 0; i < 8; i++){
		cout << a[i] << " = ";
		while(a[i] != 1){
			cout << prime[a[i]] << " ";
			a[i] /= prime[a[i]];
		}
		cout << endl;
	}
}
