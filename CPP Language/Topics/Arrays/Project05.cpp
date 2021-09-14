//**C++ Program To Check Evenness / Oddness Of An Array

#include <iostream>

int main()
{
    int num[20];
    int count;

    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> count;

    std::cout << "ENTER YOUR NUMBERS: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    std::cout << "EVEN: ";

    for (int i = 0; i < count; i++)
    {
        if (num[i] % 2 == 0)
        {
            std::cout << num[i] << " ";
        }
    }

    std::cout << std::endl
              << "ODD: ";

    for (int i = 0; i < count; i++)
    {
        if (num[i] % 2 != 0)
        {
            std::cout << num[i] << " ";
        }
    }

    return (0);
}