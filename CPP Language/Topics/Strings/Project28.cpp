//**C program to eliminate/remove first character of each word from a string.

int len(char *p)
{
    int count;
    for (count = 0; *(p + count) != '\0'; count++)
    {
    }

    return (count);
}

#include <iostream>

int main()
{
    char str[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    int count = len(str);

    for (int i = 0; i < count; i++)
    {
        int res_i;

        if (i == 0)
        {
            res_i = i;
            while (i < count)
            {
                str[i] = str[i + 1];
                i++;
            }

            count--;
            i = res_i;
        }

        if (str[i] == ' ')
        {
            i = i + 1;
            res_i = i;

            while (i < count)
            {
                str[i] = str[i + 1];
                i++;
            }

            count--;
            i = res_i;
        }
    }

    std::cout << "AFTER REMOING FIRST LETTER OF STRING: " << std::endl
              << str << std::endl;
    return (0);
}