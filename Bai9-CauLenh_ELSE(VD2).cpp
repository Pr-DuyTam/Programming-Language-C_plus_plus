#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Ban nhap so nam di: "; cin >> n;
	
	if ((n % 400) == 0 || (n % 4 == 0 && n != 100) ==0)
	{
		cout << "La nam nhuan. Yes";
	}
	else {
		cout << "Khong phai nam nhuan. No";
	}
	
	return 0;
}
