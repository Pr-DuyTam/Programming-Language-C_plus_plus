#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	
	if((n % 10) % 3 == 0)
	{
		cout << "Dung" << endl;
	}else{
		cout << "Sai" << endl;
	}
	return 0;
}
