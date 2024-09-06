#include <iostream>
using namespace std;

int tonguoc(int n)
{
	int tong = 0;
	for(int i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			tong += i;
		}
	}
	return tong;
}

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Ket qua la: " << tonguoc(n) <<endl;
	return 0;
}
