//**C++ Program To Check Character Is Uppercase, Lowercase Alphabet Or A Digit or A Special Symbol Using If/Else Statements

#include <iostream>
#include <ctype.h>

int main()
{
    char a;

    std::cout << "ENTER A CHARACTER: " << std::endl;
    std::cin >> a;

    if (isalpha(a))
    {
        if (isupper(a))
        {
            std::cout << a << " IS UPPERCASE ALPHABET CHARACTER" << std::endl;
        }
        else
            std::cout << a << " IS LOWERCASE ALPHAETIC CHARACTER" << std::endl;
    }
    else
    {
        if (isdigit(a))
        {
            std::cout << a << " IS A DIGIT CHARACTER" << std::endl;
        }

        else
            std::cout << a << " IS A SPECIAL CHARACTER" << std::endl;
    }

    return (0);
}
