## Function
#### Default Arguments
```cpp
void func(int a, int b = 10, int c = 20) {
    std::cout << a << " " << b << " " << c << std::endl;
}

int main() {
    func(1, 4);
}
```
Things to notice:
1. in the order of all the arguments, if there is a default argument for example as second argument, then all the arguments after (from left to right) it must have a default argument as well.
2. if we have default argument in the function declaration, then we cannot assign value to arguments as default arguments anymore when we actually define the function. However, if we don't have default arguments in the function declaration, we can do that in the definition. Basically, for declaration and definition, only one of them should have default arguments.
```cpp
int func1(int a = 10, int b = 20);

int func1(int a, int b) {
    return 0;
}
```

#### Placeholder Parameter
When you define a function, in the parameters, only delcare its data type but not a variable name. Then when you want to call the function, you still need to pass in a correct data matches the data type for the placeholder parameter
```cpp
void func(int a, int) {
    std::cout << a << std::endl;
}

int main() {
    func(1, 10);
}
```
We cannot use the placeholder parameter inside of the function since it does not have a name assign to it. Placeholder parameters in C++ are useful for maintaining function signatures required by interfaces or APIs while ignoring unnecessary parameters.

#### Function Overload
