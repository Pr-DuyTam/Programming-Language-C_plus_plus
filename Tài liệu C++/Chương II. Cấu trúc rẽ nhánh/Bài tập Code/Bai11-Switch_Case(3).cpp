#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Nhap so a: "; cin >> a;
	cout << "Nhap so b: "; cin >> b;
	char c; 
	cout << "Ban muon toan tu nao: "; cin >> c;
	
	switch(c){
		case '+': // a+b
			cout << a <<  " + " << b << " = " << a + b << endl; break;
		case '-': // a-b
			cout << a <<  " - " << b << " = " << a - b << endl; break;
		case '*': // a*b
			cout << a <<  " * " << b << " = " << a * b << endl; break;
		case '/': // a/b
			cout << a <<  " / " << b << " = " << a / b << endl; break;
		
		default:
			cout << "Khong phai la toan tu" << endl;
	}
}
