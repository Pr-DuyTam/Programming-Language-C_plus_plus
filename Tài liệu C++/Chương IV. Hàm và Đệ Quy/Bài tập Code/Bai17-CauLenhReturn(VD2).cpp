#include <iostream>
using namespace std;

long long factorial(int n){
	long long giaithua = 1;
		for (int i = 1; i <=n; i++)
		{
			giaithua *= i; // giaithua nhan voi i
		}
		return giaithua;
}

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	if(n < 0)
	{
		cout << "Khong tinh duoc" << endl;
	}else{
		cout << "Ket qua la: " << factorial (n)<< endl;
	}
	return 0;
}
