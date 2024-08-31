#include <iostream>

using namespace std;
int main()
{
	char a;
	cout << "Nhap chu de kiem tra: "; cin >> a;
	if(isupper(a))
	{
		cout << "Chu Hoa";
	}else{
		cout << "Chu Thuong";
	}
	/*
	if(islower(a))
	{
		cout << "Chu thuong";
	}else{
		cout << "Chu hoa";
	}*/
	return 0;
}

