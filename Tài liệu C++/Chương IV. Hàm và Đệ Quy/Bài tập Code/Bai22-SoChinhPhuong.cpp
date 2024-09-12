#include <iostream>
#include <math.h>
using namespace std;

int cp(int n)
{
	int can = sqrt(n);
	if(can * can == n)
	{
		return 1;
	}else{
		return 0;
	}	
}
int main()
{
	if(cp(20) == 1)
	{
		cout << "Yes\n";
	}else{
		cout << "No\n";
	}
	if(cp(25) == 1)
	{
		cout << "Ok\n";	
	}
	else {
		cout <<"Hi\n";
	}
	return 0;
}

