#include <iostream>

using namespace std;

int main()
{
 bool isRaining = true;
    bool isSunny = false;

    // Xu?t gi� tr? c?a c�c bi?n bool
    cout << "isRaining: " << isRaining << endl;
    cout << "isSunny: " << isSunny << endl;

    // Su dung bien bool trong cau tr�c dieu kien
    if (isRaining) {
        cout << "Troi dang mua." << endl;
    } else {
        cout << "Troi kh�ng mua." << endl;
    }

    if (isSunny) {
        cout << "Troi dang nang." << endl;
    } else {
        cout << "Troi khong nang." << endl;
    }

    return 0;
}
