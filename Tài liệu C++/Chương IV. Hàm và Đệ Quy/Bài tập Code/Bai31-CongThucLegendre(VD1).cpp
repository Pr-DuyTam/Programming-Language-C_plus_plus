#include <iostream>
using namespace std;

#define ll long long

int find_power(int n, int p){
	int res = 0, tmp;
	for(int i = p; i <= n; i += p){
		tmp = i;
		//Phan tich boi i cua p
		while(tmp % p == 0){
			++res;
			tmp /= p;
		}
	}
	return res;
}

int main(){
	cout << "Bac cua 2 trong 10 ! : " << find_power(10, 2) << endl;
	cout << "Bac cua 17 trong 1000000! : " << find_power(1000000, 17) << endl;
	return 0;
}
