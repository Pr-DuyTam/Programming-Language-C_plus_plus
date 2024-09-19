#include <iostream>
#include <math.h>
using namespace std;

int fibo(long long n)
{
	long long F[100];
	F[0] = 0; 
	F[1] = 1;
	for(int i = 2; i <= 92; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
	}
	//ktra
	for(int i = 0; i <= 92; i++)
	{
		if(n == F[i])
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	long long n;
	cout << "Nhap n: "; cin >> n;
	if(fibo(n))
	{
		cout << "La so Fibonacci";
	}
	else{
		cout << "Khong la so Fibonacci";
	}
	return 0;
}
