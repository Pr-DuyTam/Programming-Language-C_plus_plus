#include <iostream>
using namespace std;

int main()
{
	int a,b;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	
	int min = a < b ? a : b; // Toan tu dkien. Neu a < b dung, thi a la min va nguoc lai
	for(int i = min; i >= 1; i-- )
	{
		if((a % i == 0) && (b % i == 0))
		{
			cout << "Ket qua: " << i <<endl;
			break;
		}
	}
	return 0;
}
