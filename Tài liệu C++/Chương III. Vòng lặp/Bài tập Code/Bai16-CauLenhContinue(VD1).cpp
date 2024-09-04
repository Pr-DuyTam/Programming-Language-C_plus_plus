#include <iostream>
using namespace std;

int main()
{
	for(int i = 1; i <= 4; i++)
	{
		cout << "1. xin chao\n";
		if(i % 2 == 0) 
		{
			continue;
		}
		cout << "2. Ket thuc\n";
	}	
} 
