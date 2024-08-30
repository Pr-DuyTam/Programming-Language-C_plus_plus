#include <iostream>
using namespace std;

int main()
{
	char a;
	cout << "Nhap ki tu: "; cin >> a;
	//cach 1
	if(a >= 'a' && a <= 'z')
	{
		cout << "Yes\n";
	}else{
		cout << "No\n";
	}
	
	// cach 2
	if(a >= 97 && a <= 122)
	{
		cout << "Dung\n";
	}else{
		cout << "Sai\n";
	}
	return 0;
}
