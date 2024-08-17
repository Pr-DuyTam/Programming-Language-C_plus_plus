#include <iostream>

using namespace std;

int main()
{
 bool isRaining = true;
    bool isSunny = false;

    // Xu?t giá tr? c?a các bi?n bool
    cout << "isRaining: " << isRaining << endl;
    cout << "isSunny: " << isSunny << endl;

    // Su dung bien bool trong cau trúc dieu kien
    if (isRaining) {
        cout << "Troi dang mua." << endl;
    } else {
        cout << "Troi không mua." << endl;
    }

    if (isSunny) {
        cout << "Troi dang nang." << endl;
    } else {
        cout << "Troi khong nang." << endl;
    }

    return 0;
}
