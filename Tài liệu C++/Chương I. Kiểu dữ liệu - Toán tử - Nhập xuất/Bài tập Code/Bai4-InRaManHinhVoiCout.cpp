#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	bool a = true;
	bool b = false;
	
	float c = 30.56975;
	double d = 25.1557945666;
	
	cout << "In ra true: " << a << endl;
	cout << "In ra false: " << b << endl;
	
	cout << boolalpha << a << endl;
	cout << boolalpha << b << endl;
	
	cout << fixed << setprecision(2) << c << endl;
	cout << fixed << setprecision (5) << d << endl;
	return 0; 
}
