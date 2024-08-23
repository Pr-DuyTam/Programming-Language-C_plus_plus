#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	int a = 2, b = 10, c = 100;
	cout << a << "^" << b << "= " << (int)pow(a,b) <<endl;
	
	double tam = pow(c, 1.0 / 5); // can bac 5 cua 100
	cout << fixed << setprecision(2) << tam << endl;
	return 0;
}
