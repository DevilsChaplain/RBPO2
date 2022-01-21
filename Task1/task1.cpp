#include <iostream>
#include <cmath>
int main()
{
	double x, f;
	x = 2;
	std::cout << "x: " << x << std::endl;
	f = tan(3*x);
	std::cout << "f = " << f << std::endl;
	std::cout << "x = ";
	std::cin >> x;
	f = tan(3*x);
	std::cout << "f = " << f << std::endl;
	return 0;
}
