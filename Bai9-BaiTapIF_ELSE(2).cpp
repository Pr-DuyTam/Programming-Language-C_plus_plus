#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	
	if((n % 3 && n % 5) == 0 )
	{
		cout << "Dung" << endl;
	}
	else{
		cout << "Sai" << endl;
	}
	return 0;
}

