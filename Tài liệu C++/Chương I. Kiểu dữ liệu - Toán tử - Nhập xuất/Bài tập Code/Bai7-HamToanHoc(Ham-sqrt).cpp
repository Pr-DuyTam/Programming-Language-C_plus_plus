#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
int main()
{
	int a = 100;
	int tam = (int)sqrt(a);
	cout << tam << endl;
	
	float b = sqrt(1000); //Tinh can bac 2 cua 1000
	cout << fixed << setprecision(2) << b <<endl;
	return 0;
}
