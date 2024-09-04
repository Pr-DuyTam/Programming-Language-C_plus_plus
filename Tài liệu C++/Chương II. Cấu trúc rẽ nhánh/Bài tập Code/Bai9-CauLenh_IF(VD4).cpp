#include <iostream>

using namespace std;

int main()
{
	int n = 28 , m = 4;
	if ((n % m) == 0)
	{
		cout << "Chia het." << endl;
	}
	if ((n != m) == 0)
	{
		cout << "Khong chia het."<< endl;
	}
	return 0;
}
