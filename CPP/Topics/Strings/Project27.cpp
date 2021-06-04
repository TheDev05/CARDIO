//**C program to eliminate/remove all vowels from a string.

#include <iostream>

int len(char *p)
{
    int count;
    for (count = 0; *(p + count) != '\0'; count++)
    {
    }

    return (count);
}

int main()
{
    char str[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    int count = len(str);

    for (int i = 0; i < count; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
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

    std::cout << str << std::endl;

    return (0);
}