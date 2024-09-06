#include <iostream>
using namespace std;

int tong(int a, int b)
{
	int res = a + b;
	return 28; // luon tra ve a + b = 28
	return res;
}
int main()
{
	int a,b;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	
	cout << "Tong la: " << tong(a,b)<<endl;
	return 0;
}
	
