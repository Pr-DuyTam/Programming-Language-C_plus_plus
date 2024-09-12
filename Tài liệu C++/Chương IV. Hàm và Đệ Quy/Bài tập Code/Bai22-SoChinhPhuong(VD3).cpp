#include <iostream>
#include <math.h>
using namespace std;

int cp(int n)
{
	int can = sqrt(n);
	if(can * can == n)
	{
		return 1;
	}else{
		return 0;
	}
}
int main()
{
	int a,b;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << "Ket qua la: ";
	for(int i = a; i <= b ; i++ )
	{
		if(cp(i) == 1)
		{
			cout << i << " ";
		}
	}
	return 0;
}
