#include <iostream>

using namespace std;

int main()
{
	// Khoi tao so nguyen
	int a = 100; // a duoc gan gia tri là 100
	int b = 20; // b dduuoc gan gia tri là 20
	int c; // c chua duoc gan gia tri ban dau
	
	c = a + b;
	cout << "Phep Cong " << a	<< " + " << b << " = " << c << endl;
	
	c = a - b;
	cout << "Phep Tru " << a << " - " << b << " = " << c << endl;
	
	c = a * b;
	cout << "Phep nhan " << a << " * " << b << " = " << c << endl;
	
	c = a / b;
	cout << "Phep chia " << a << " / " << b << " = " << c << endl;
	
	c = a % b;
	cout << "Phep chia du " << a << " % " << b << " = " << c << endl;
	
	return 0;
}
