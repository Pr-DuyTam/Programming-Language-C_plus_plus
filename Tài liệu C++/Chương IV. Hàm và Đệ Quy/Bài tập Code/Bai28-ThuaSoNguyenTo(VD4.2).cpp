#include <iostream>
#include <math.h>  
using namespace std;

void prime_divisor(int n)
{
   for(int i = 2; i <= sqrt(n); i++)
   {
      if(n % i == 0)
	  {
        cout << i << " ";
        while(n % i == 0)
		{
            n /= i;
        }
      }
   }
   if(n > 1)
   {
      cout << n << "";
   }
}

int main()
{
	int n;
	cout <<"Nhap n: "; cin >>  n;
	cout <<"Ket qua in ra la: ";
   	prime_divisor(n);
   	return 0;
}
