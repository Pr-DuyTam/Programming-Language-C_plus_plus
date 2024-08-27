#include <iostream>
using namespace std;

int main()
{
	int a = 30;
	cout << "Nhap a: "; cin >> a;
	if((a > 30) && (a < 50))
	{
		cout << "Dung";
	}else{
		cout << "Sai";
	}
	return 0;
}

