#include <iostream>
using namespace std;

int find (int a, int b, int c = 3, int d = 4)
{
	
	cout << "Ket qua la: " << a << " " << b << " " << c << " " << d << " " << endl;
	cout << "Tong la: ";
	return a + b + c + d;
}
int main()
{
	int a,b;
	
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << find(a , b) << endl;
	cout << find(a, b, 10) << endl;
	cout << find(a , b , 10 , 20) << endl;
	return 0;
}
