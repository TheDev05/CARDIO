//**C++ Program To Find Greater No. Among given Three Number

#include <iostream>
int main()
{
    int a, b, c;

    std::cout << "ENTER 3 NUMBERS: " << std::endl;
    std::cin >> a >> b >> c;

    if (a > b && a > c)
    {
        std::cout << a << " is larger among all" << std::endl;
    }
    else
    {
        if (b > a && b > c)
        {
            std::cout << b << " is greater among all" << std::endl;
        }

        else
            std::cout << c << " is greater among all" << std::endl;
    }
    return (0);
}