#include <iostream>
#include <cmath>

void f();
double res;
double x = 2;

int main() {
    std::cout << "x = " << x << std::endl;
    f();
    std::cout << "f = " << res << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    f();
    std::cout << "f = " << res << std::endl;
    return 0;
}

void f() {
    res = tan(3*x);
}



