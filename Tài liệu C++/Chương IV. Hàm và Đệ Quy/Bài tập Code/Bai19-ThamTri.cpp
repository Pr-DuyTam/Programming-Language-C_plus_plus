#include <iostream>
using namespace std;

void thaydoi(int n)
{
	cout << "Dia chi cua n trong bo nho may tinh: " << &n << endl;
	n += 100;
	cout << "Gia tri cua n trong ham thay doi: " << n << endl;
}

int main()
{
	int m = 1000;
	cout << "Dia chi cua m trong bo nho may tinh: " << &m <<endl;
	thaydoi(m);
	cout << "Gia tri cua m sau khi ham ket thuc: " << m << endl;
	
	return 0;
}
