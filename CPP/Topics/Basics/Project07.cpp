//**C++ Program To Check Number Is Positive Or Negative

#include <iostream>

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    if (num > 0)
    {
        std::cout << "NUMBER IS POSITIVE" << std::endl;
    }
    else
        std::cout << "NUMBER IS NEGATIVE" << std::endl;

    return (0);
}
