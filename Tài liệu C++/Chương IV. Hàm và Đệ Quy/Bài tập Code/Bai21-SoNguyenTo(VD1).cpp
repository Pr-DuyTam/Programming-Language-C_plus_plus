#include <iostream>
#include <math.h>
using namespace std;

int url(int n)
{
	if(n < 2)
	{
		return 0;
	}
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return 0; // neu tim thay uoc nao khac ngoai 1 va chinh no, thi ko la SNT 
		}
	}
	return 1;
}
int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Ket qua la: ";
	int dem = 0; // Khoi tao bien 'dem'
	for(int i = 1 ; i <= n; i++)
	{
		if(url(i) == 1)
		{
			cout << i << " ";
			++dem; // tang bien dem len 1 moi khi tim thay 1 SNT
		}
	}
	cout << "\nDem la: " << dem << endl; // in ra tong SNT tim thay
	return 0;
}
