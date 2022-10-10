//*C program to find Length of the String by passing String/ Character Array as an Argument using User Define Functions.

#include <iostream>

int strlen(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
    }
    return (i);
}

int main()
{
    char str[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    int len = strlen(str);

    std::cout << "LENGTH OF STRING IS: " << len;
    return (0);
}