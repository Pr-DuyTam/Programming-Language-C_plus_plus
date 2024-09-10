#include <iostream>
#include <math.h>
using namespace std;
int prime(int n){
    int dem = 0; // khoi tao bien 'dem' de dem so uoc cua 'n'
    for(int i = 1; i <= sqrt(n); i++)
	{
        if(n % i == 0) // neu n chia het i, tuc i la uoc n
		{
            ++dem; // tang bien dem len 1 khi tim dc 1 uoc
            if(i != n / i) // neu ko chia het
			{
                ++dem; // tang bien dem them 1 lan nua
            }
        }
    }
    if(dem == 2) // tong so uoc la 2
	{
        return 1; // true
    }
    else{
        return 0; // false;
    }
}
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (prime(i) == 1)  // goi ham (prime(i)) de ktra so i. Neu kq la 1, thi i la SNT
		{
            cout << i << " ";
        }
    }
    return 0;
}
