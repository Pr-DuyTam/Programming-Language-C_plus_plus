#include <iostream>
#include <math.h>
using namespace std;

int pink(int n)
{
	if (n < 2)
	{
		return 0;
	}
	for(int i = 2; i <= sqrt(n) ; i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	while(true)
	{
		if(pink(n) == 1) // ktra 'n' là SNT. Neu dung,in 'n' va thoat khoi vong lap
		{
			cout << "Ket qua la: " << n << " ";
			break;
		}
		++n; // neu ko la SNT, 'n' dc tang len va tiep tuc ktra
	}
	return 0;
}
