//**C program to eliminate all vowels from a string.

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

        char temp = (str[i] >= 'A' && str[i] <= 'Z') ? str[i] + 32 : str[i];

        if (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u')
        {
            int res_i = i;
            while (i < count)
            {
                str[i] = str[i + 1];
                i++;
            }
            count--;
            i = res_i - 1;
        }
    }

    std::cout << "AFTER REMOVAL OF VOWELS: " << std::endl
              << str << std::endl;

    return (0);
}
