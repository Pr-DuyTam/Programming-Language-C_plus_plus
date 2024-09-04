#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int a = 100;
	cout << a++ << endl; // In 100 sau do moi tang a len 101
	cout << a << endl; // in 101
	
	cout << ++a << endl; // tang a len 102 sau do moi in 102
	cout << a << endl; // in 102
	
	return 0;
}
/*
{
	int a = 100, b = 50;
	++a; cout <<"Tang a truoc: "<< a <<endl; // a = 101
	
	a++; cout <<"Tang a sau: "<< a << endl; // a = 102
	
	--b; cout <<"Giam b truoc: " << b << endl; // b = 49
	
	b--; cout <<"Giam b sau: " << b << endl; // b = 48
	return 0;
}
*/
