#include <iostream>

using namespace std;

int main()
{
	char ch1 = 'A';
	char ch2 = 'B';
	char ch3 = 'C';
	
	cout << "Ky tu 1: " << ch1 << endl;
	cout << "Ky tu 2: "<< ch2 << endl;
	// tang gia tri len 1 va xuat ket qua theo bang ma ASCII
	cout << "Ky tu 3: " << ch3 << endl;
	ch3 = ch3 + 1;
	cout << "Ky tu 3 sau khi tang len 1: " << ch3 << endl;
	
	ch3 = ch3 + 2;
	cout << "Ky tu 3 sau khi tang len 2: " << ch3 << endl;
	return 0;
	
}
