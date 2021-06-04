//**C program to print all VOWEL and CONSONANT characters separately.

#include <iostream>
#include <cctype>

int main()
{
    char str[20];

    std::cout << "ENTER YOUR STRING:" << std::endl;
    std::cin.getline(str, 20);

    std::cout << "VOWELS: " << std::endl;

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u')
        {
            std::cout << str[i];
        }
    }

    std::cout << std::endl
              << "CONSONANTS: " << std::endl;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u')
        {
        }

        else
        {
            if (!isblank(str[i]))
            {
                std::cout << str[i];
            }
        }
    }

    return (0);
}