#include <iostream>
#include <iomanip>

using namespace std;

	typedef int songuyen;
	typedef long long ll;
	typedef double sothuc;
	typedef bool dungsai;
	
int main()
{
	songuyen a = 1000;
	ll b = 2467855979;
	sothuc c = 5.668;
	dungsai d = true;
	
	cout << a << " " << b <<endl;
	cout << fixed << setprecision(2) << c <<endl;
	cout << boolalpha << d <<endl;
	return 0;
}
