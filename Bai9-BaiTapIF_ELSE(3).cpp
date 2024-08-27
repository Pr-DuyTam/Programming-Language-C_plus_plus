#include <iostream>

using namespace std;

int main(){
    int n;
	cout << "Nhap n: "; 
	cin >> n;
    if((n % 3 == 0) && (n % 7 != 0)){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}
