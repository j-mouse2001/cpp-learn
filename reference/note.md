## Reference 
reference is basically giving a different name to a variable

```cpp
int main() {
    // create variable a and a reference b
    int a = 10;
    int &b = a;

    // they are pointing to the same address in memory
    std::cout << "a is " << &a << std::endl;
    std::cout << "b is " << &b << std::endl;
    
}
```

couple things to notice, we must initialize a value to a reference, only declaration is not acceptable
not allowed: `int &b;` 
once a reference is initialized, you cannot change it

When we want to return the reference, we do NOT want to return a function variable's reference, just like accessing function variable outside of function, once function is called, the variable is gone. The first time we are able to access it but not anymore.

A reference is a constant pointer actually. 
these two are the same, when compiler read line a reference initialization
it is actually running the next line of code
```cpp
    int& ref1 = c;
    int* const ref2 = &c;
```
then when we modify the value at thay address, the compiler knows then run this code `ref1 = 20; // *ref1 = 20;`

normally, reference can only be used to data stored in the stack or heap, a variable basically
if we want reference to use on a const value, we must specify `const int &constRef = 77;`
but it cannot be changed since it is const,it is read-only, not ok: constRef = 100;
this const reference usually used for parameter so that we don't accidentally modify the parameter

```cpp
int okData = 99;
int &ref3 = okData; // not ok: int &ref3 = 88; 88 is a const value

void showNum(const int &val) {
    std::cout << "val: " << val << std::endl;
}
```
