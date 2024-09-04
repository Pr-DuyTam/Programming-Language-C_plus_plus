#include <iostream>
#include <iomanip>

using namespace std;
	typedef char kitu;
	typedef pair<int , int> ii;
	
int main()
{
	kitu a = '$';
	cout << a << endl;
	
	ii b = make_pair(100 , 200);
	cout << b.first << ' ' << b.second << endl;
	return 0; 
}
