#include <iostream>
#include <math.h>
using namespace std;

int ucln(int a, int b)
{
	//neu a hay b = 0 thi ucln la so con lai
	if(a == 0 || b == 0)
	{
		return a + b;
	}
	while(a != b)
	{
		if(a > b)
		{
			a = a - b; //thay the so lon hon bang hieu 2 so
		}
		else
		{
			b = b - a; // thay the so lon hon bang hieu 2 so
		}
	}
	return a;
}
int main()
{
	int a,b;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;

	cout << "Ket qua la: " << ucln(a,b);
	return 0;
}
