#include <iostream>
using namespace std;
// Hàm tính tong
int tong(int a, int b, int c) {
    int sum = a + b + c;
    return sum;
}

int main() {
	int a,b,c;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << "Nhap c: "; cin >> c;
    // Goi hàm và in ket qua
    int result = tong(a, b, c);
    cout << "Tong la: " << result << endl;
    return 0;
}

