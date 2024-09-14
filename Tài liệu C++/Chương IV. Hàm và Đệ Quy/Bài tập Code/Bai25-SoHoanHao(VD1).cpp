#include <iostream>
#include <math.h>
using namespace std;
 
int is_perfect(int n)
{
	int tong = 0;
	for(int i = 1; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			tong += i;
			if(i != n/i)
			{
				tong += n / i;
			}
		}
	}
	if(tong - n == n)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Ket qua la: ";
	for(int i = 1; i <= n; i++)
	{
		if(is_perfect(i))
		{
			cout << i << " ";
		}
	}
	return 0;
}
