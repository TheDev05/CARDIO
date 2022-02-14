//**C++ Program To Print A Reverse Order Of Any Number Using Loop

#include <iostream>

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    for (int i = num; i >= 1; i--)
    {
        std::cout << i << std::endl;
    }

    return (0);
}