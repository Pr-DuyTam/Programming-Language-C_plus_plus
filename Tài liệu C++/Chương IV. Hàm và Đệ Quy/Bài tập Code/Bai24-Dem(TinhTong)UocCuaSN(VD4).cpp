#include <iostream>
#include <math.h>
using namespace std;
int demuoc(int n)
{
	int dem = 0;
	for(int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			dem += 1;
			if(i != n/i)
			{
				dem += 1;
			}
		}
	}
	return dem;
}
int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	cout <<"Ket qua la: " << demuoc(n);
	return 0;
}
