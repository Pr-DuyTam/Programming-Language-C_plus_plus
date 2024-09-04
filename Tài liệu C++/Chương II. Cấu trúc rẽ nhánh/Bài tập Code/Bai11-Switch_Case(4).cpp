#include <iostream>
using namespace std;

int main()
{
	int m, y; 
	cout << "Nhap thang: "; cin >> m;
	cout << "Nhap nam: "; cin >> y;
	switch (m)
		{
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				cout <<"Thang " << m << " Nam " << y << " co 31 ngay" << endl; break;
			
			case 4: case 6: case 9: case 11:
				cout << "Thang " << m << " Nam " << y << " co 30 ngay" << endl; break;
				
			case 2:
				if((y % 400) == 0 && (y % 4 == 0 && y % 100 != 0 ))
				{
					cout << "Thang " << m << " Nam " << y << " co 29 ngay" << endl;
				}else{
					cout << "Thang " << m << " Nam " << y << " co 28 ngay" <<endl;
				}
			break;
		default:
			cout << "Khong dung roi, nhap lai di";		
		}
}
