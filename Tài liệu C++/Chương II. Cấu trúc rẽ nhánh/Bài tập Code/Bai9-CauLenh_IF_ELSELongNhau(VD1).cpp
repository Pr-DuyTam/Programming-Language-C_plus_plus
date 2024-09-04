#include <iostream>
using namespace std;

int main()
{
	int a = 20;
	if ((a >= 20 && a <=50))
	{
		if((a % 2) == 0 || (a % 3) == 0 || (a % 5) == 0 || (a % 7) == 0 )
		{
			cout << "Yes";
		}else{
			cout << "No";
		}
	}else{
		cout << "That bai";
	}
	return 0;
}
/*
int main ()
{
	int a = 20;
	if ( (a >= 20 && a <=50) && (a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 7 == 0))
	{
		cout << "Yes";
	}else{
		cout << "No";
	}
	return 0;
}*/
