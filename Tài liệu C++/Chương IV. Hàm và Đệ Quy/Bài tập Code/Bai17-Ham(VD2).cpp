#include <iostream>
#include <iomanip>
using namespace std;

void display(int a, long long b, double c)
{
	cout << a << " " << b << " " << fixed << setprecision(2) << c << endl;
}

int main()
{
	int a;
	long long b;
	double c;
	
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << "Nhap c: "; cin >> c;
	
	display (a,b,c); // hien thi 3 tham so
	return 0;
}
