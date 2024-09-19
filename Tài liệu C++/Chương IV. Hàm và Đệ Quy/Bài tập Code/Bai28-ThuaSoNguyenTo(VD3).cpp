#include <iostream>
#include <math.h>  
using namespace std;

void factorize(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        int mu = 0;
        while (n % i == 0) {
            n /= i;  // n s? gi?m
            ++mu;
        }
        if (mu != 0) {
            cout << i << "^" << mu;
            if (n > 1) {
                cout << " x ";  
            }
        }
    }
    if (n > 1) {
        cout << n << "^1";  // Neu n còn lon hon 1, thì n là mot so nguyên to
    }
    cout << endl;  // Xuong dòng sau khi in xong ket qua
}

int main()
{
	int n;
	cout <<"Nhap n: "; cin >> n;
	cout << "Ket qua in ra la: ";
    factorize(60);  // Goi hàm factorize voi n 
    return 0;
}

