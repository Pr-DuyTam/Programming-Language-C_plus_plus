#include <iostream>
using namespace std;

int main()
{
	int n;
	int tong = 0;
	cout << "Nhap so nguyen: "; cin >> n;
	
	for(int i = 1; i <= n ; i++)
	{
		if(n % i == 0)
		{
			tong += i;
		}
	}
	cout << "Ket qua tong la: "<< tong << endl;
	return 0;
}
