#include <iostream>
using namespace std;

int main()
{
	int n,m; // day la 2 gioi han cua khoang ma chuong trinh se ktra
	int tong = 0;
	cout << "Nhap so n: "; cin >> n;
	cout << "Nhap so m: "; cin >> m;
	
	for(int i = n; i <= m; i++ ) // bat dau gia tri 'n' va chay den 'b'
	{
		if(i % 3 == 0)
		{
			cout << i << " ";
			tong += i;
		}
	}
	cout << "\nTong boi cua 3 la: " << tong << endl;
	return 0;
}

