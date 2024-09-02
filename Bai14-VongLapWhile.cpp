#include <iostream>
using namespace std;

int main()
{
	int min, max;
	cout << "Nhap gia tri min: "; cin >> min;
	cout << "Nhap gia tri max: "; cin >> max;
	
	cout << "Ket qua la: ";
	while (min <= max)
	{
		cout << min << " ";
		++min;
	}
	return 0;
}

