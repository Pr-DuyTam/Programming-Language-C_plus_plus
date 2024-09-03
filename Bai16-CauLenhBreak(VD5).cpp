#include <iostream>

using namespace std;

int main(){
    for(int i = 1; i <= 2; i++){
        for(int j = 1; j <= 5; j++){
            cout << "Xin chao\n";
            if(j == 2){
                break; // có tác dung dong vòng for j
            }
            cout << "Hello !\n";
        }
    }
}
