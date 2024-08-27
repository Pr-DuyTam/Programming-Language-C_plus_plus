#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Nhap a: "; cin >> a;
	
	if((a % 3 && a % 7) == 0)
	{
		cout << "DuyTam " <<endl;
		cout << "xin chao" << endl;
	}else{
		cout << "Hen gap lai " <<endl;
		cout << "Tam biet" <<endl;
	}
	return 0;
}
