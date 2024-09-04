#include <iostream>
using namespace std;
int main()
{
	int m, y;
	cout << "Nhap thang : "; cin >> m ;
	cout << "Nhap nam: "; cin >> y;
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		cout << "Co " << 31 << " ngay" <<endl;
	}
		else if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			cout << "Co " << 30 << " ngay" << endl;
		}
		else if (m == 2)
		{
			if((y % 400) == 0 || (y % 4 == 0 && y % 100 != 0 ))
		{
			cout << "Co " << 29 << " ngay" << endl;
		}
			else
			{
			cout << "Co " << 28 << " ngay" << endl;
			}
	}
	else
	{
		cout << "Thang khong hop le" << endl;
	}
	return 0;
}
