//**C++ Program For Temperature Conversion Celcius To Fahrenheit And Vice Versa Using Switch Case

#include <iostream>

int main()
{
    int temp, key;

    std::cout << "ENTER TEMPRETURE: " << std::endl;
    std::cin >> temp;

    std::cout << "ENTER 1 FOR C TO F CONVERSION AND 0 FOR F TO C CONVERSION: " << std::endl;
    std::cin >> key;

    switch (key)
    {
    case 1:
        std::cout << "TEMP IN F: " << (temp + 32) * 1.8 << std::endl;
        std::cout << "kk";
        break;
    case 0:
        std::cout << "TEMP IN C:" << (temp - 32) * 0.55 << std::endl;
        break;

    default:
        std::cout << "ERROR KEY IS INVALID" << std::endl;
        break;
    }

    return (0);
}