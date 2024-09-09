#include <iostream>
using namespace std;

void tam(int a, int b)
{
	int c = a;
		a = b;
		b = c;
}
void duy(int &a, int &b)
{
	int c = a;
		a = b;
		b = c;
}
int main()
{
	int x , y;
	cout << "Nhap x: "; cin >> x;
	cout << "Nhap y: "; cin >> y;
	
	tam (x,y);
	cout << "Ket qua la: " << x << " " << y << endl;
	duy (x,y);
	cout << "Ket qua la: " << x << " " << y << endl;
	return 0;
}
