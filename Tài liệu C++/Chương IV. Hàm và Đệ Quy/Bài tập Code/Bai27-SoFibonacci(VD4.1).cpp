#include <iostream>
using namespace std;

void fibo(int n) {
    if (n == 1) {
        cout << "0\n";
    }
    else {
        cout << "0 1 ";
        long long fn1 = 1, fn2 = 0, fn;
        for (int i = 2; i < n; i++) {
            fn = fn1 + fn2;
            cout << fn << " ";
            fn2 = fn1;
            fn1 = fn;
        }
        cout << endl; 
    }
}

int main()
{
	int n;
	cout <<"Nhap n: "; cin >> n;
	cout <<"Ket qua la: ";
    fibo(n);  
    return 0;
}

