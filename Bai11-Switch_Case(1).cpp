#include <iostream>
using namespace std;

int main()
{
	int n = 3;
	switch (n){
		case 1:
			cout << "So 1\n"; break;
		case 2:
			cout << "So 2\n"; break;
		case 3:
			cout << "So 3\n"; break;
			// neu n ko phai la 1 2 3
			default:
			cout << "Khong dung roi";  
	}
}
