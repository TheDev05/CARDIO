//**C++ Program To Print A Message Multiple Times Using Loop

#include <iostream>

int main()
{
    int count;

    std::cout << "ENTER LOOP LIMIT: " << std::endl;
    std::cin >> count;

    for (int i = 0; i < count; i++)
    {
        std::cout << "NoobCoder" << std::endl;
    }

    return (0);
}