#include <iostream>
using namespace std;

void xuly()
{
	int n;
	cout <<"Nhap n: "; cin >> n;
	int tong = 0;
		for (int i = 1; i <= n; i++)
		{
			if(n % i == 0)
			{
				tong += i;
			}
		}
	cout << "Ket qua la: " << tong << endl;
}
	
int main()
{
	xuly();
	return 0;
}
