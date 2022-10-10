//**C program to swap adjacent characters of a string.
//**COND: CHARS COUNT SHOULD EVEN.

#include <iostream>

int len(char *p)
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

    int count = len(str);

    if (count % 2 != 0)
    {
        std::cout << "STRING CHARCTER HAVE ODD COUNT" << std::endl;
        return (0);
    }

    for (int i = 0; i < count; i++)
    {
        if (i % 2 == 0)
        {
            char temp = str[i];
            str[i] = str[i + 1];
            str[i + 1] = temp;
        }
    }

    std::cout << "AFTER SWAPPING ADJACENTS: " << str << std::endl;
    return (0);
}