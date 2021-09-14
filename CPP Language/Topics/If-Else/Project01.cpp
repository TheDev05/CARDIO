//**C++ Program To Check Character Is Uppercase, Lowercase Alphabet Or A Digit Or A Special Symbol

#include <iostream>
#include <cctype>

int main()
{
    char input;

    std::cout << "ENTER A CHARACTER: " << std::endl;
    std::cin >> input;

    if (isdigit(input))
    {
        std::cout << "INPUTTED CHAR IS DIGIT" << std::endl;
    }
    else
    {
        if (isalpha(input))
        {
            if (isupper(input))
            {
                std::cout << "INPUTTED CHARACTER IS UPPERCASE ALPHABET" << std::endl;
            }

            else
                std::cout << "INPUTTED CHARACTER IS LOWWERCASE ALPHABET" << std::endl;
        }

        else
            std::cout << "INPUTTED CHARACTER IS A SPECAIL SYMBOL" << std::endl;
    }

    return (0);
}
