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

int main()
{
	int n; 
	cout<<"Nhap n: "; cin >> n;
	cout << legendre(n, 5) << endl;
	return 0;
}
