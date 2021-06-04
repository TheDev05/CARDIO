//**C++ Program For Denomination of an Amount Using While Loop

#include <iostream>

int main()
{
    int pink, orange, blue, red, green, yellow, voilet, value;
    pink = orange = red = blue = green = yellow = voilet = 0;

    std::cout << "ENTER YOUR VALUE: " << std::endl;
    std::cin >> value;

    while (value > 2000)
    {
        value = value - 2000;//? we can also use divide and rem conserve trick.as...red=value%2000 and value=value/2000;
        red++;
    }

    while (value > 500)
    {
        value = value - 500;
        green++;
    }

    while (value > 100)
    {
        value = value - 100;
        blue++;
    }

    while (value > 100)
    {
        value = value - 100;
        orange++;
    }

    while (value > 10)
    {
        value = value - 10;
        pink++;
    }

    while (value > 5)
    {
        value = value - 5;
        yellow++;
    }

    while (value >= 1)
    {
        value = value - 1;
        voilet++;
    }

    std::cout << "2000: " << red << std::endl
              << "500: " << green << std::endl
              << "100: " << blue << std::endl
              << "50: " << orange << std::endl
              << "10: " << pink << std::endl
              << "5: " << yellow << std::endl
              << "1: " << voilet << std::endl;
}
