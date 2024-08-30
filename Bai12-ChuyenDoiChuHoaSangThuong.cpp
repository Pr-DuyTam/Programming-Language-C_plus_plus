#include <iostream>
using namespace std;

int main()
{
	char n, m;
	cout << "Nhap n: "; cin >> n;
	cout << "Nhap m: "; cin >> m;
	n += 32;
	cout << "Sau khi cong n: " << n << endl;
	
	m -= 32;
	cout << "Sau khi tru m: " << m << endl;
	
	return 0;
}
