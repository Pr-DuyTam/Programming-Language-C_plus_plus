#include <iostream>
using namespace std;

// function prototype
 
void ray();
int tong(int, int, int);
long long kq(int, long long);

void ray(){
	cout << "Xin chao\n";
}

int tong(int a, int b, int c){
	return a + b + c;	
}

long long kq(int t, long long m ){
	return 2 * t + 3 * m;
}

int main(){
	
	int a, b, c, t;
	long long m;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << "Nhap c: "; cin >> c;
	cout << "Nhap t: "; cin >> t;
	cout << "Nhap m: "; cin >> m;
	
	ray();
	cout <<"Tong la: " << tong (a,b,c) << endl;
	cout << "Ket qua la: " << kq (t,m) <<endl;
	return 0;
	
}
