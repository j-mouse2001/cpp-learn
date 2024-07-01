#include <iostream>

int main() {
    int a = 10;
    int &b = a;

    std::cout << "a is " << &a << std::endl;
    std::cout << "b is " << &b << std::endl;
}