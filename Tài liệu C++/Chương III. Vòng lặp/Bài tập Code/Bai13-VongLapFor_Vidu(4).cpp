#include <iostream>
using namespace std;
/* vi du giai thua:
	3! = 3*2*1 =6
*/
int main()
{
	int n;
	int giaithua = 1;
	cout << "Nhap so n: "; cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		giaithua *= i; // bien 'giaithua' duoc nhan voi gia tri cua 'i' 
	}
	cout << giaithua << endl;
	return 0;
}
