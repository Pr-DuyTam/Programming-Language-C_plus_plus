#include <iostream>
using namespace std;

int main()
{
	int n;
	int tong = 0;
	
	while(true)
	{
		cout << "Nhap n: "; cin >> n;
		if(n < 0)
		{
			continue; // bo cau lenh ben duoi. Nhap n < 0 thi nhap lai	
		}else if (n == 0){
			break; // n = 0 thoat while
		}
		tong += n; // n > 0 thi cong vao bien 'tong'
	}
	cout << "Ket qua la: " << tong <<endl;
}
