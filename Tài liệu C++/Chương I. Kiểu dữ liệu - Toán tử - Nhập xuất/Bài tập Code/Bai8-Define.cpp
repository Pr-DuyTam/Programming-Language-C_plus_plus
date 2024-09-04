#include <iostream>
#include <iomanip>
using namespace std;

#define songuyen int
#define ll long long
#define sothuc double
#define dungsai bool
#define ii pair<int, int>

int main ()
{
	songuyen a = 1000;
	ll b = 548792134;
	double check = 2.345;
	bool ch1 = true;
	ii p = make_pair(100,200);
	
	cout << a << " " << b << endl;
	cout << fixed << setprecision(2) << check <<endl;
	cout << boolalpha << ch1 << endl;
	cout << p.first << " " << p.second <<endl;
	
	return 0;	
	
}
