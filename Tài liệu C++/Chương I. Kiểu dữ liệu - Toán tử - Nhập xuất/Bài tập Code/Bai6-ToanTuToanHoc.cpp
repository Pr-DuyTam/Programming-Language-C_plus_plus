#include <iostream>
#include <iomanip>
using namespace std;
// Nhap b�n k�nh h�nh tr�n, in ra chu vi v� dien t�ch lay 2 chu so phan thap ph�n
int main ()
{
	double R;
	cout << "Nhap ban kinh: "; cin >> R ;
	
	double chuvi = 2 * 3.14 * R;
	double dientich = 3.14 * R * R;
	cout << "Chu vi duong tron l�: "<< fixed << setprecision (1) << chuvi << endl;
	cout << "Dien tich duong tron l�: "<< fixed << setprecision (1) << dientich << endl; 
	
	return 0;
}
/*
//Nhap chieu rong va chieu dai. Tinh chu vi, dien tich hinh chu nhat
int main()
{
	int dai, rong;
	cout << "Nhap chieu dai: "; cin >> dai;
	cout << "Nhap chieu rong: "; cin >> rong;
	
	int chuvi = 2 * (dai + rong);
	cout << "Chu vi l�: " << chuvi << endl;
	
	int dientich = dai*rong;
	cout << "Dien tich l�: " << dientich <<endl;
	return 0;
}
*/
