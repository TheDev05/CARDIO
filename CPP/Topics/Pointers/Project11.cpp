//**Program to print size of different types of pointer variables.

#include <iostream>

int main()
{
    int a;
    float b;
    char c;

    int *pa = &a;
    float *pb = &b;
    char *pc = &c;

    std::cout << "INT POINTER: " << sizeof(pa) << std::endl
              << "FLOAT POINTER: " << sizeof(pb) << std::endl << "CHAR POINTER: " << sizeof(pc);

    return (0);
}
