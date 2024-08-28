#include <iostream>

using namespace std;
int main()
{
	int n = 30;
	cout <<"Nhap n: "; cin >> n;
	if((n >= 30))
	{
		if((n % 2) || (n % 3) || (n % 5) == 0)
		{
			cout << "Dung";
		}
		else{
			cout << "Sai";
		}
	}else{
		cout << "end";
	}
	return 0;
}
