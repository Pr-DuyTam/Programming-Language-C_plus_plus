#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	int a = 100, b = 200;
	swap (a,b);
	cout <<"a se la: "<< a <<endl;
	cout <<"b se la: " << b <<endl;
	
	char x = '#' , y = '%';
	char temp = x;
	
	x = y;
	y = temp;
	cout << x << ' ' << y << endl;
	return 0;
}
