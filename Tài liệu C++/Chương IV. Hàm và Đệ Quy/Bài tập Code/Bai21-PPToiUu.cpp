#include <iostream>
#include <math.h>
using namespace std;

int pink(int n)
{
	if(n < 2) // các so nho hon 2 ko phai la snt
	{
		return 0; // loai so am va so 0 voi so 1
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) //Neu n chia het cho bat ky so nao tu 2 den can bac 2 cua no, thi n ko phai la SNT
		{
			return 0; // ket thuc tai day
		}	
	}
	return 1; // la snt
}
int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Ket qua la: ";
	for(int i = 1; i <= n; i++)
	{
		if(pink(i) == 1) // neu i tra ve 1, i la SNT
		{
			cout << i << " ";
		}
	}
	return 0;
}
