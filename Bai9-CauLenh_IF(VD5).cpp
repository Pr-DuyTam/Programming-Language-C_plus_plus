#include <iostream>

using namespace std;

int main()
{
	int n; 
	cout << "Nhap n: ";
	cin >> n;
	if ((n == 2) || (n == 3) || (n == 5) || (n==7))
	{
		cout <<"Yes" << endl;
	}
	else{
		cout << "No";
	}
	return 0;
}
