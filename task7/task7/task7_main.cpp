#include <iostream>
#include "task7_func.cpp"

void f();

int main() {
    std::cout << "x =" << x << std::endl;
    f();
    std::cout << "f = " << res << std::endl;
    std::cout << "x = ";
    std::cin >> x;
    f();
    std::cout << "f = " << res << std::endl;
    return 0;
}