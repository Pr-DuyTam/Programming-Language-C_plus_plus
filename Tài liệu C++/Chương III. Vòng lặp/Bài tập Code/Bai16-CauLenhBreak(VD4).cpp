#include <iostream>
using namespace std;

int main()
{
	int a;
	while(true){	
		cout << "Nhap so a: "; cin >> a;
		
		if(a >= 0)
		{
			cout <<"Ket thuc do la so duong";
			break;
		}else{
			cout <<"Nhap lai nhe, nho nhap so duong\n";
		}
	}	
}
