#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a = 1000000 , b = 2000000;
	
	long long tich1 = a * b;
	cout <<"Tich 1 l�: " << tich1 << endl;
	
	// �p ki�u
	
	long long tich2 = (long long) a * b;
	cout <<"Tich 2 l�: " << tich2 << endl;
	
	// Nh�n voi so 1ll = 1 long long
	
	long long tich3 = 1ll * a * b;
	cout <<"Tich 3 l�: " << tich3 << endl;
	return 0;
}

