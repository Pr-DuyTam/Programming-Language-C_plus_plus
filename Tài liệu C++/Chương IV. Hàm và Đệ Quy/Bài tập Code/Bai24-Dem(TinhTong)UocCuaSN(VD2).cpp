#include <iostream>
using namespace std;

int demuoc(int n)
{
	int dem = 1; // 0
	//for(int i = 1; i <= n; i++)
	for(int i = 1; i <= n/2; i++)
	{
		if(n % i == 0)
		{
			dem += 1;
		}
	}
	return dem;
}
int main()
{
	int n;
	cout << "Nhap so dem: "; cin >> n;
	cout << "Ket qua la: "<< demuoc(n);
	return 0;	
}
