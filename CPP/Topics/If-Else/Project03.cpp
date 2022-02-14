//**C++ Program To Check Number Is Even Or Odd Using If/Else Statements

#include <iostream>

int main()
{
    int a;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> a;

    if (a % 2 == 0)
    {
        std::cout << a << " IS EVEN NUMBER" << std::endl;
    }

    else
        std::cout << a << " IS ODD NUMBER" << std::endl;

    return (0);
}