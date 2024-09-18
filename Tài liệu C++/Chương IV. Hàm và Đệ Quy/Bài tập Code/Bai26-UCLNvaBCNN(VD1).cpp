#include <iostream>
#include <math.h>
using namespace std;
int ucln(int a, int b)
{
	if(a == 0 || b == 0)
	{
		return a + b;
	}
	int min = a < b ? a : b;
	for(int i = min; i >= 1; i--)
	{
		if(a % i == 0 && b % i == 0)
		{
			return i;
		}
	}
	return 1;
}
int main(){
	int a,b;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;

	cout << "Ket qua la: " << ucln(a,b);
	return 0;

}
