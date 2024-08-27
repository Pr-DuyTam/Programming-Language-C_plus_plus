#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	
	if((n % 2) == 0)
	{
		cout << "Hello" << endl;
	}
	else{
		cout << "Khong phai so chan roi. GoodBye" <<endl;
	}
	return 0;
}
