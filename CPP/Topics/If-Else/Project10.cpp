//**C++ Program To Count Letters, Space, Digits, And Others Using If/Else Statements

#include <iostream>
#include <ctype.h>
#include <cstring>

int main()
{
    char name[20];

    std::cout << "ENTER YOUR STRING: " << std::endl;
    std::cin.getline(name, 20);

    int count = strlen(name);

    int alpha, dig, blank, other;
    alpha = dig = blank = other = 0;

    for (int i = 0; i < count; i++)
    {
        if (isalpha(name[i]))
        {
            alpha++;
        }

        else
        {
            if (isdigit(name[i]))
            {
                dig++;
            }
            else
            {
                if (isblank(name[i]))
                {
                    blank++;
                }

                else
                    other++;
            }
        }
    }

    std::cout << "ALPHABET: " << alpha << std::endl
              << "DIGITS: " << dig << std::endl
              << "BLANKS: " << blank << std::endl
              << "OTHERS: " << other << std::endl;

    return (0);
}