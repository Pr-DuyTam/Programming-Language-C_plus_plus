#include <iostream>
#include <math.h>
using namespace std;

int fibo(long long n)
{
	if(n == 0 || n == 1)
	{
		return 1;
	}
	long long fn1 = 1, fn2 = 0, fn;
	for(int i = 2; i <= 92; i++)
	{
      fn = fn1 + fn2;
      if(fn == n)
	  {
         return 1;
      }
      fn2 = fn1;
      fn1 = fn;
   }
   return 0;
}

int main()
{
   int n;
   cout << "Nhap n: "; cin >> n;
   cout<<"Ket qua la: ";
   for(int i = 0; i <= n; i++)
   {
      if(fibo(i))
	  {
        cout<< i << " ";
      }
   }
   return 0;
}
