C++中给变量如果不声明数据类型的话不能分配内存，数据类型的存在意义就是给变量分配合适的内存空间
#include 语句中，<> 只能用在配置过的编译器路径中的文件，“”是都可以的
pragma once 可以帮我们确保多次引用的问题
C 语言的标准库有.h后缀，C++没有

class and struct, struct has public fields automatically

在类外面定义的static 变量和函数，不会在链接的时候被其他文件发现，只会在当前的cpp文件中声明，尽量对于不需要全局访问的变量和方法，都声明为static


