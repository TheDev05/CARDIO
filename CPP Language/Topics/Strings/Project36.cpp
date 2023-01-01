//**C program to compare strings using strcmp() function.

#include <iostream>
#include <cstring>
int compare(char *, char *);

int main()
{
    char str1[20], str2[20];

    std::cout << "ENTER YOUR FIRST STRING: " << std::endl;
    std::cin.getline(str1, 20);

    std::cout << "ENTER SECOND STRING: " << std::endl;
    std::cin.getline(str2, 20);

    if (compare(str2, str1))
    {
        std::cout << "BOTH STRINGS ARE NOT EQUAL. " << std::endl;
    }

    else
        std::cout << "BOTH STRINGS ARE EQUAL. " << std::endl;

    return (0);
}

int compare(char *p1, char *p2)
{
    return (strcmp(p1, p2) == 1 ? 1 : 0);
}