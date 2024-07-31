#include<iostream>

void func(int a, int) {
    std::cout << a << std::endl;
}

int main() {
    func(1, 10);
}