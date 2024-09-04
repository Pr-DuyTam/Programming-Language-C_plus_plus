#include <iostream>
using namespace std;

int main()
{
	char tam;
	cout << "Nhap chu cai: "; cin >> tam;
	if((tam >= 'A' && tam <= 'Z') || (tam >= 'a' && tam <= 'z'))
	{
		cout << "Dung roi" << endl;
	}else{
		cout << "Sai roi" << endl;
	}
	return 0;
}
