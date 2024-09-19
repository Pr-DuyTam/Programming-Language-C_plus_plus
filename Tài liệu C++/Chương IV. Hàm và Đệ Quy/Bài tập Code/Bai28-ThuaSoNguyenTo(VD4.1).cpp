#include <iostream>
#include <math.h>  
using namespace std;

int prime(int n)
{
   if(n < 2) return 0;
   for(int i = 2; i <= sqrt(n); i++){
      if(n % i == 0){
         return 0;
      }
   }
   return 1;
}

void prime_divisor(int n)
{
   for(int i = 1; i <= n; i++){
      if(n % i == 0 && prime(i)){
        cout << i << " ";
      }
   }
}

int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	cout << "Ket qua la: ";
   	prime_divisor(n);
   	return 0;
}
