#include <iostream>
#include <math.h>
using namespace std;

int ucln(int a, int b)
{
	if(a == 0 || b == 0)
	{
		return a + b;
	}
	while(a!=b)
	{
		if (a > b)
		{
			a = a - b;
		}else{
			b = b - a;
		}
	}
	return a;
}
int bcnn(int a, int b)
{
	return a * b / ucln(a,b);
}
int main()
{
	int a,b;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;

	cout << "Ket qua la: " << bcnn(a,b);
	return 0;
}
