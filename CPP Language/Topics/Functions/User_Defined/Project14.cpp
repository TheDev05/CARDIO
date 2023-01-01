//**C program to pass a string to a function.

#include <iostream>

void put_zero(char *p)
{
    for (int i = 0; *(p + i) != '\0'; i++)
    {
        if (i == 0)
        {
            *(p + i) = *(p + i) - 0x20;
        }

        if (*(p + i) == ' ')
        {
            *(p + i + 1) = *(p + i + 1) - 0x20;
        }
    }
}

int main()
{
    char str[20];

    std::cout << "ENTER STRING: " << std::endl;
    std::cin.getline(str, 20);

    put_zero(str);

    std::cout << "YOUR STRING IS: " << std::endl;
    std::cout << str;
    return (0);
}