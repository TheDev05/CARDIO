//**C++ Program To Convert A Lowercase Alphabet To Uppercase Alphabet Or Vice-Versa Using If/Else Statements

#include <iostream>
#include <ctype.h>
#include <stdio.h>

int main()
{
    char a;

    std::cout << "ENTER A CHARACTER: " << std::endl;
    std::cin >> a;

    if (islower(a))
    {

        a = toupper(a);
        std::cout << "IN UPPERCASE : " << a << std::endl;
        return (0);
    }

    else
    {
        a = towlower(a);
        std::cout << "IN LOWERCASE : " << a << std::endl;
    }
    return (0);
}