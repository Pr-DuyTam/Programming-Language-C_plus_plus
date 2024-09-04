#include <iostream>
using namespace std;

int main()
{
	int min, max;
	cout << "Nhap min: "; cin >> min;
	cout << "Nhap max: "; cin >> max;
	
	do{
		cout << min << ' ';
		++min;
	}while(min <= max);
	return 0;
}
