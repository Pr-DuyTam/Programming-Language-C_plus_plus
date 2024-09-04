#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	int r = n % 10; // chu so cuoi cung
	
	if((n >= 10 && n <= 99))
	{
		if((r == 2) || (r == 3) || (r == 5) || (r == 7)) // chuong trinh ktra xem chu so cuoi cung 'r' có bang 2,3,5,7 ko
		{
			cout << "Dung";
		}else{
			cout << "Sai";
		}
	}else{
		cout << "Ket Thuc";
	}
	return 0;
}
