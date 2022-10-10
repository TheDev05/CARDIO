//**C++ Program To Find Quotient And Reminder Of Two Numbers Using If/Else Statements

#include <iostream>

int main()
{

    int a, b;

    std::cout << "ENTER TWO NUMBERS: " << std::endl;
    std::cin >> a >> b;

    if (a > b)
    {
        std::cout << "QUOTIENT IS: " << a / b << std::endl;
        std::cout << "REMAINDER IS: " << a % b << std::endl;
    }

    else
    {
        std::cout << "QUOTIENT IS: " << b / a << std::endl;
        std::cout << "REMAINDER IS: " << b % a << std::endl;
    }

    return (0);
}