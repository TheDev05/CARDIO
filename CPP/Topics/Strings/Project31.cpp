//**C program to remove all spaces from a given string.

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

    for (int i = 0; i < count; i++)
    {
        if (str[i] == ' ')
        {
            int res_i = i;

            while (i < count)
            {
                str[i] = str[i + 1];
                i++;
            }
            count--;
            i = res_i;
        }
    }

    std::cout << "AFTER REMOVAL OF BLANK SPACES FROM STRING: " << std::endl;
    std::cout << str;

    return (0);
}