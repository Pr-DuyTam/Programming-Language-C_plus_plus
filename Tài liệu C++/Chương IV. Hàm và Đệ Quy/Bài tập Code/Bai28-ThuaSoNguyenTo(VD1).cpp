#include <iostream>
#include <math.h>
using namespace std;
void factorize(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		//neu n chia het cho i,i se la thua so nguyen to
		while(n % i == 0)
		{
			cout << i << " ";
			n /= i; // n se giam
		}
	}
	if(n > 1)
	{
		cout << n << " ";
	}
}
int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Ket qua la: ";
	factorize(n);
	return 0;
}
