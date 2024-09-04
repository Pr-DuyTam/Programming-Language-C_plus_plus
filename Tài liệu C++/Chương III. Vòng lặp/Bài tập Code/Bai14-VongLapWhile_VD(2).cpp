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
		tong += n % 10;: Lay chu so cuoi c�ng cua n bang c�ch d�ng ph�p to�n n % 10 (chia lay du)
		sau d� cong gi� tri n�y v�o tong. 
		V� du: neu n = 123, th� n % 10 cho ket qua 3, v� gi� tri 3 n�y duoc cong v�o tong.
		*/
		n /= 10;
		/*
		n /= 10;: Chia n cho 10 (lay phan nguy�n), tuc l� bo di chu so cuoi c�ng cua n. 
		V� du: neu n = 123, sau khi thuc hien n /= 10, n tro th�nh 12.
		*/
	}
	cout << "Ket qua la: " << tong << endl;
	return 0;
}

