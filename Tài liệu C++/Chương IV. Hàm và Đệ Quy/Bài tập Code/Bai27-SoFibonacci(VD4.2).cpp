#include <iostream>
using namespace std;

void fibo(int n)
{
	long long F[100];
	F[0] = 0;
	F[1] = 1;
	for(int i = 2; i < n; i++)
	{
		F[i] = F[i-1] + F[i-2];
	}
	for(int i = 0; i < n; i++)
	{
		cout << F[i] << " ";
	}
}
int main()
{
	int n;
	cout <<"Nhap n: "; cin >> n;
	cout <<"Ket qua la: ";
	fibo(n);
	return 0;
}
