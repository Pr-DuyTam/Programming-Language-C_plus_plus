#include <iostream>
#include <math.h>
using namespace std;

int p(int n)
{
	if (n < 2)
	{
		return 0; // ko la SNT
	}
	for(int i = 2; i <= sqrt(n); i++)
	{
		if( n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int tong(int n)
{
	int tong = 0;
	while(n)
	{
		tong += n % 10;
		n /= 10;
	}
	return p(tong);// ktra tong cac chu so phai la SNT ko
}
int chuso(int n)
{
	while(n)
	{
		int r = n % 10;
		if(r != 2 && r != 3 && r != 5 && r != 7)
		{
			return 0; // ko phai chu so nao la 2,3,5,7 tra ve 0
		}
		n/=10;
	}
	return 1; //all la SNT rra ve 1
}
int main()
{
	int n;
	cout <<"Nhap n: "; cin >> n;
	cout << "So thuan nguyen to trong doan [1,"<<n<<"]\n";	
	cout <<"Ket qua la: ";
	for (int i = 1; i <= n ; i++)
	{
		if(tong(i) && chuso(i) && p(i))
		{
			cout << i << " " ;
		}
	}
	return 0;
}
