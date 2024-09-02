//Nhap so tu ban phim cho toi khi nhap so 28 thi dung
#include <iostream>
using namespace std;

int main() {
    int n;

    while (true) {  // Dkien luon dung chay vinh vien (true)
        cout << "Nhap n: ";
        cin >> n;

        if (n == 28) {
            break;  // Thoát khoi vòng lap khi n bang 28
        }
    }

    cout << "Ket thuc" << endl;  // Xuat thông báo ket thúc
    return 0;
}

