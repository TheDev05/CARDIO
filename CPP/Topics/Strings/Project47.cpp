//**C program to reverse a string without using library function.

#include <iostream>

int strlen(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
    }
    return (i);
}

void reverse(char *p)
{
    int count = strlen(p);

    for (int i = 0; i < count / 2; i++)
    {
        char temp = *(p + i);
        *(p + i) = *(p + count - 1 - i);
        *(p + count - 1 - i) = temp;
    }
}

int main()
{
    char str[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    reverse(str);

    std::cout << "AFTER REVERSING: " << std::endl
              << str << std::endl;
    return (0);
}