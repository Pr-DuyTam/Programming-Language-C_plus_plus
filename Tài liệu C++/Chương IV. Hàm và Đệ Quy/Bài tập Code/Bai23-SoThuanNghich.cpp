#include <iostream>
using namespace std;

int thuan_nghich(int n)
{
	int m = 0, tmp = n; // khoi tao m =0, luu gia tri cua n vao tmp
	while(n != 0)
	{
		m = m * 10 + n % 10;
		n /= 10; // loai bo chu so cuoi cua n
	}
	if(tmp == m)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int n; 
	cout <<"Nhap n: "; cin >> n;
	if(thuan_nghich(n))
	{
		cout << "Ket qua la: " << n <<endl;
	}
	else{
		cout << "Nhap lai n";
	}
	return 0;
}
