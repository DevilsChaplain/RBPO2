#include <iostream>
#include <iomanip> 
#include "func.h";

using namespace std;

int main()
{
	cout << "x = " << y << endl;
	Safonov::f();
	cout << "f = " << r << endl;

	cout << "x = ";
	cin >> y;
	Safonov::f();
	cout << "f = " << r << endl;
	return 0;
}
