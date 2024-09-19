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
	for(int i = 1; i <= 20; i++){
		cout << prime[i] << " ";
	}
}
