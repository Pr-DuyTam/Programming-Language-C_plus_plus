#include <iostream>
using namespace std;

int tong(int a, int b, int c)
{
	int sum = a + b + c;
	return sum;	
}

int main()
{
	int a,b,c;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << "Nhap c: "; cin >> c;
	
	cout << tong (a,b,c) <<endl;
	return 0;	
}
