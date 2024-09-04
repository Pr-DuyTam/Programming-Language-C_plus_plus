#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	
	while(n != 0)
	{
		int m = n % 10;
		if(m % 2 == 0)
		{
			cout << "Ket qua: " << m << endl;
			break;
		}
		n /= 10;
	}
}
