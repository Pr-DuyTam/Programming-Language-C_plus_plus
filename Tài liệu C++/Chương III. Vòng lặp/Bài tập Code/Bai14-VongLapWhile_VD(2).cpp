// Tinh tong chu so N
#include <iostream>
using namespace std;

int main()
{
	int n; 
	cout << "Nhap n: "; cin >> n;
	int tong;
	
	while(n != 0)
	{
		tong += n % 10;
		/*
		tong += n % 10;: Lay chu so cuoi cùng cua n bang cách dùng phép toán n % 10 (chia lay du)
		sau dó cong giá tri này vào tong. 
		Ví du: neu n = 123, thì n % 10 cho ket qua 3, và giá tri 3 này duoc cong vào tong.
		*/
		n /= 10;
		/*
		n /= 10;: Chia n cho 10 (lay phan nguyên), tuc là bo di chu so cuoi cùng cua n. 
		Ví du: neu n = 123, sau khi thuc hien n /= 10, n tro thành 12.
		*/
	}
	cout << "Ket qua la: " << tong << endl;
	return 0;
}

