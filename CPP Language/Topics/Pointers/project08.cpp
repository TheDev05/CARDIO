//**Program to print a string using pointer.

// #include <iostream>

// int main()
// {
//     char name[] = "ANKIT RAJ";

//     char *p = name;
//     // char *p = &name[0];

//     std::cout << "NAME: " << p;
//     return (0);
// }

// ********************************************************************************************************************************************
// *RIVISON

#include <iostream>
int main()
{
    char text[20];
    char *p = text;

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(text, 20);

    std::cout << "TEXT: " << p;

    return (0);
}