#include <iostream>

void func(int& ref) {
    ref = 100;
}

void showNum(const int &val) {
    std::cout << "val: " << val << std::endl;
}

int main() {
    int c = 100;

    // these two are the same, when compiler read line a reference initialization
    // it is actually running the next line of code
    int& ref1 = c;
    int* const ref2 = &c;

    // then when we modify the value at thay address, the compiler knows then run this code
    ref1 = 20; // *ref1 = 20;

    std::cout << "c is " << c << std::endl;
    std::cout << "ref1: " << ref1 << std::endl;
    std::cout << "ref2: " << ref1 << std::endl;

    // normally, reference can only be used to data stored in the stack or heap, a variable basically
    int okData = 99;
    int &ref3 = okData; // not ok: int &ref3 = 88; 88 is a const value

    // if we want reference to use on a const value, we must specify
    const int &constRef = 77;
    
    // but it cannot be changed since it is const,it is read-only, not ok: constRef = 100;

    // this const reference usually used for parameter so that we don't accidentally modify the parameter


    
}