//** C program to count upper case, lower case and special characters in a string.
//**WITHOUT CCTYPE

#include <iostream>

int main()
{
    char str[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(str, 20);

    int upper = 0, lower = 0, special_char = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' || str[i] >= 'a') && (str[i] <= 'Z' || str[i] <= 'z'))
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                upper++;
            }

            else
                lower++;
        }

        else
            special_char++;
    }

    std::cout << "UPPER CASE ALPHABET: " << upper << std::endl
              << "LOWER: " << lower << std::endl
              << "SPECIAL CHARS: " << special_char << std::endl;

    return (0);
}