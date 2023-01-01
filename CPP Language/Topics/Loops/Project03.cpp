//**C++ Program To Print A Table Of Given Number Using Loop

#include <iostream>

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER" << std::endl;
    std::cin >> num;

    std::cout << "************TABLE*************" << std::endl;

    for (int i = 1; i <= 10; i++)
    {
        std::cout << num * i << std::endl;
    }

    return (0);
}