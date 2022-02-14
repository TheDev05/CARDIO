//**C++ Program To Print All Value Of An Array

#include <iostream>

int main()
{
    int num[10], count;

    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    std::cout << "ENTE YOUR NUMBER: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    std::cout << "OUTPUT: " << std::endl;

    for (int i = 0; i < count; i++)
    {
        std::cout << num[i] << " ";
    }

    return (0);
}