#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	int a = 27;
	int tam = (int)cbrt(a);
	cout << tam <<endl;
	
	float b = cbrt(100);
	cout << fixed << setprecision(2) << b << endl;
	return 0;
}

