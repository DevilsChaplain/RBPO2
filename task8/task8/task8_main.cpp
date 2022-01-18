#include <iostream>
#include <iomanip>
#include "func.h";
using namespace std;


int main()
{
	cout << "x = " << y << endl;
	f();
	cout << "f = " <<  result << endl;
	cout << "x = ";
	cin >> y;
	f();
	cout << "f = " <<  result << endl;
}