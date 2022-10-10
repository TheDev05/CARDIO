//**C program to count upper case and lower case characters in a string.

#include <iostream>

int main()
{
    char str[20];
    int upper = 0, lower = 0;

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' || str[i] >= 'A' && str[i] <= 'z' || str[i] <= 'Z')
        {
            if (str[i] >= 'a' && str[i] <= 'z' && str[i] != ' ')
            {
                lower++;
            }

            else
            {
                if (str[i] != ' ')
                {
                    upper++;
                }
            }
        }
    }

    std::cout << "UPPER CASE: " << upper << std::endl
              << "LOWER CASE: " << lower << std::endl;

    return (0);
}