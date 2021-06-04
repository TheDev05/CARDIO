//**C program to toggle each character of a string.

#include <iostream>

int main()
{
    char str[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' || str[i] >= 'A' && str[i] <= 'z' || str[i] <= 'Z' && str[i] != ' ')
        {

            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 0x20;
            }

            else
                str[i] = str[i] + 0x20;
        }
    }

    std::cout << "AFTER TOGGLING CHARACTERS: " << std::endl
              << str << std::endl;
    return (0);
}