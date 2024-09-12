#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Ket qua la: ";
	for(int i = 1; i <= sqrt(n); i++)
	{
		cout << i * i << " ";
	}
	return 0;
}
