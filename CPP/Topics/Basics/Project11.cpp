//**C++ Program To Find The Address Of Variable

#include <iostream>
int main()
{
    int a = 100;

    std::cout << "VAR NAME: a" << std::endl
              << "VAR VALUE: " << a << std::endl
              << "VAR ADDRESS: " << &a << std::endl;

    return (0);
}