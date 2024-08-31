#include <iostream>

using namespace std;

int main(){
    int n;
    for(; ;){
        cout << "Nhap n : ";
        cin >> n;
        if(n == 28){
            goto nhan;
        }
    }
    nhan:
    cout << n << endl;
    cout << "Ket thuc !!!\n";
    return 0;
}
