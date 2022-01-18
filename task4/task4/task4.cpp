#include <iostream>
#include <cmath>

void f(const double& x, double& res);

int main() {
    double x = 2, y;
    f(x, y);
    std::cout << "x = " << x << std::endl;
    std::cout << "f = " << y << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    f(x, y);
    std::cout << "f = " << y << std::endl;
    return 0;
}

void f(const double& x, double& res) {
    res = tan(3*x);
}

