// Dem chu so cua so nguyen N
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	int dem = 0;
	
	while(n != 0) // n ko = 0 while tiep tuc chay
	{
		++dem;	
		n /= 10; // n chia 10 de bo di chu so cuoi cung cua n. 
				//VD: n=12345 sau khi chia 10 thi la n=1234
	}
	cout <<"Ket qua la: " << dem << endl;
	return 0;
}
