//**C program to calculate length of the string.
//**USER-DEFINED STRLEN()

#include <iostream>

int strlen(char *);

int main()
{
    char str[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    int count = strlen(str);

    std::cout << "LENGTH OF STRING IS: " << count;

    return (0);
}

int strlen(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
    }

    return (i);
}