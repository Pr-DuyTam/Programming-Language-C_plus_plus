#include <iostream>


using namespace std;
int main()
{
	int a, b;
	cout <<"Nhap gia tri a: "; cin >> a;
	cout <<"Nhap gia tri b: ", cin >> b;
	
	if (a > b){
		cout << "a lon hon b la: True" ;
	}
	else if (a < b)
	{
		cout << "a be hon b la: False";
	}
	else if (a == b)
	{
		cout << "a va b bang nhau: True";
	}
	return 0;
}
/*
int main(){
	cout << boolalpha << (10 > 50) << endl;

    cout << boolalpha << (20 <= 30) << endl;

    cout << boolalpha << (80 >= 100) << endl;

    cout << boolalpha << (20 > 10) << endl;

    cout << boolalpha << (10 != 20) << endl;

    cout << boolalpha << (10 == 10) << endl;
	return 0;
*/
