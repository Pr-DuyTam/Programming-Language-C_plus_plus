#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int n = (10 < 20) ? 100 : 200;
	cout << n << endl;
	
	int a = (100 < 100) && (200 < 300) ? 50 : 10;
	cout << a << endl;
	return 0;	
} 
