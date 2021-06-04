//**Program to print a string using pointer.

#include <iostream>

int main()
{
    char name[] = "ANKIT RAJ";

    char *p = name;
    // char *p = &name[0];

    std::cout << "NAME: " << p;
    return (0);
}