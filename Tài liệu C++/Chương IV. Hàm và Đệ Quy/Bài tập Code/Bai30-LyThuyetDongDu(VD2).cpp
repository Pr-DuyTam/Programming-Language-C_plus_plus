#include <iostream>
#include <math.h>

using namespace std;

#define ll long long
#define mod 1000000007

ll F[1000001]; // F[i] : so fibo thu i

int main(){
	F[0] = 0;
	F[1] = 1;
	for(int i = 2; i <= 1000000; i++){
		F[i] = F[i - 1] + F[i - 2];
		F[i] %= mod;
	}
	cout << F[100] << endl;
	return 0;
}
