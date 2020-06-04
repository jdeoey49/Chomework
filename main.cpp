#include<iostream>
#include"Fraction.h"
using namespace std;
int main()
{
	Fraction a(7, 3);
	Fraction b(1, 3);
	cout << a << " + " << b << " = " << (a + b) << endl;
	cout << a << " - " << b << " = " << (a - b) << endl;
	cout << a << " * " << b << " = " << (a * b) << endl;
	cout << "3 + 1/3 = " << 3 + b << endl;
	cout << "3 - 1/3 = " << 3 - b << endl;
	cout << "3 * 1/3 = " << 3 * b << endl;
	cout << "3 / 1/3 = " << 3 / b << endl;
	return 0;
}