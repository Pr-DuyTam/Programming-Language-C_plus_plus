#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a = 567;
	
	cout << setw(10) << a << endl;
	cout << setw(10) << setfill('4') << a << endl;
	
	cout << setw(10) << setfill('$') << "DuyTam" << endl;
	return 0;
}
