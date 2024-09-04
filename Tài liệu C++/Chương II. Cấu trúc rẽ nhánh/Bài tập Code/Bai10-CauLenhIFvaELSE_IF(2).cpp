#include <iostream>
using namespace std;

int main ()
{
	int a, b, c;
	cout << "Nhap canh a: "; cin >> a;
	cout << "Nhap canh b: "; cin >> b;
	cout << "Nhap canh c: "; cin >> c;
	
	if(a == b && b == c)
	{
		cout << "Tam giac deu" <<endl;
	}
	else if (a == b || b == c || c == a)
	{
		cout << "Tam giac can" << endl;
	}
	else if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || c*c == a*a + b*b)
	{
		cout << "Tam giac vuong" << endl;
	}else{
		cout << "Tam giac thuong" <<endl;
	}
	return 0;
}
