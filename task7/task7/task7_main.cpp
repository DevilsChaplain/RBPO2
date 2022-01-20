#include <iostream>

using namespace std;

extern double x;
extern double res;

void f();

int main(int argc, char** argv) {
	x = 2;
	cout << "x = " << x << endl;
	f();
	cout << "y = " << res << endl;
	cout << "x = ";
	cin >> x;
	f();
	cout << "y = " << res << endl;
	return 0;
}