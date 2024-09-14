#include <iostream>
#include <math.h>
using namespace std;

int prime(long long n)
{
	if(n < 2)
	{
		return 0;
	}
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
void print_perfect()
{
	for(int p = 1; p <= 33; p++)
	{
		if(prime(p))
		{
			long long tmp1 = pow(2,p) - 1;
			if(prime(tmp1))
			{
				long long tmp2 = pow(2, p - 1);
				
					cout << tmp1 * tmp2 << "\n";
			}
		}
	}
}
int main()
{
	print_perfect();
	return 0;
}
