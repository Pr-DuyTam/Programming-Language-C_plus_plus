#include <iostream>
using namespace std;

void A();
void B();

void B()
{
	cout <<"Xin chao ban nhe\n";
	return A();
}
void A()
{
	cout <<"Tam biet ban\n";
}

int main()
{
	B();
	return 0;
}
