#include <iostream>
using namespace std;

void thaydoi(int n)
{
	n += 28; // cong them 28 vao gia tri n
	cout << n << endl;
}
int main()
{
	int a = 100;
	thaydoi(a);
	cout << "Sau khi goi ham thay doi: " << a <<endl;
	return 0;
}
