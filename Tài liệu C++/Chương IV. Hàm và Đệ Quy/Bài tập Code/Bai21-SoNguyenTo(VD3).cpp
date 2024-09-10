#include <iostream>
#include <math.h>
using namespace std;

int p(int n)
{
	if (n < 2)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int tong(int n)
{
	int tong = 0;
	while(n) // lap cho den 'n' = 0
	{
		tong += n % 10; //  cong chu so cuoi cung vao bien 'tong'
		n /= 10; // loai bo chu so cuoi cung cua 'n'
	}
	return p(tong); // vong lap ket thuc, all cac chu so 'n' se cong vo bien 'tong'
}
int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Cac so co tong chu so la SNT trong doan [1,"<<n <<"] la:\n ";
	for(int i = 1; i <= n ; i++ )
	{
		if(tong(i) == 1)
		{
			cout << i <<" ";
		}
	}
	return 0;
}
