#include <iostream>
#include <math.h>
using namespace std;
int prime[10000001]; // N = 10^7

void sang(){
        //Buoc 1 : Coi tat ca c�c so tu 0 toi N l� so nguy�n to
	for(int i = 0; i <= 10000000; i++){
		prime[i] = 1;
	}
        //Buoc 2 : S�ng
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(10000000); i++){
		if(prime[i]){
			for(int j = i * i; j <= 10000000; j += i){
				prime[j] = 0;
			}
		}
	}
}

int main(){
	sang();
	for(int i = 0; i <= 30; i++){
		if(prime[i]){
			cout << i << " ";
		}
	}
	return 0;
}
