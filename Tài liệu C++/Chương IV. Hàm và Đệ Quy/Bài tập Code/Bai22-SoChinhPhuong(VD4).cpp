#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a,b;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	
	int c1 = sqrt(a), c2 = sqrt(b);
	cout <<"Ket qua la: ";
	if(c1 * c1 < a)
	{
		++c1;
	}
		for(int i = c1; i <= c2; i++)
		{
			cout << i*i <<" ";
		}
		return 0;
}
