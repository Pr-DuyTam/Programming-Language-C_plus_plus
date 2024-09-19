#include <iostream>
#include <math.h>

using namespace std;

#define ll long long
#define mod 1000000007

ll C[1005][1005];

ll solve(int n, int k){
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= i; j++){
			if(i == j || j == 0){
				C[i][j] = 1;
			}
			else{
				C[i][j] = ((C[i - 1][j - 1] % mod) + (C[i - 1][j] % mod)) % mod;
			}
		}
	}
	return C[n][k];
}

int main(){
	cout << solve(10, 2) << endl;
	cout << solve(1000, 500) << endl;
	return 0;
}
