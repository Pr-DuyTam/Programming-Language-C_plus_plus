#include <iostream>

using namespace std;
int main()
{
	// true && true = true
	bool a = (10 < 20) && (5 >= 4 );
	
	// true && true && false = false
	bool b = (10 > 5) && (5 == 5) && (8 > 10);
	
	// false || false || true = true
	bool c = (5 > 10) || (6 < 4) || (5 == 5);
	
	// !(true) = false
	bool d = !(10 < 20);
	
	// !(true && true) = !(true) = false
	bool e = !((5 > 4) && (5 < 10));
	cout << a << " " << b << " " << c << " " << d << " " << e << " " <<  endl;
	
	return 0; 
}
