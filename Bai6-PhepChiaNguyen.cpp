#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int a = 10, b = 3;
	
	int Thuong1 = a / b;
	cout << "Thuong 1 là: " << Thuong1 <<endl;
	float Thuong2 = a / b;
	cout << "Thuong 2 là: " << fixed << setprecision(3) << Thuong2 << endl;
	
	return 0;
}
