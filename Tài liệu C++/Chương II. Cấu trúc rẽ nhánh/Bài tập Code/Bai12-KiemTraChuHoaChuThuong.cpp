#include <iostream>
using namespace std;

int main()
{
	char tam, duy; 
	cout << "Nhap chu thu 1: "; cin >> tam;
	cout << "Nhap chu thu 2: "; cin >> duy;
	
	tam = tolower (tam);
	duy = toupper (duy);
	
	cout << tam << " " << duy << endl;
	return 0;
}
