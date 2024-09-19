#include <iostream>
#include <math.h>
using namespace std;

void fac(int n)
{
	for(int i = 2; i <= sqrt(n); i++){
      while(n % i == 0){
        cout << i << " ";
        n /= i; 
         //Neu van còn thua so phía sau
        if(n > 1)
		{
            cout << "x ";
        }
      }
   }
   if(n > 1){
      cout << n << " ";
   }
}

int main()
{
	int n;
	cout <<"Nhap n: "; cin >> n;
   	fac(n);
   	return 0;
}
