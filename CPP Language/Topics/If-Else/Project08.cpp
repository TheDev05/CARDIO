//**C++ Program To Find Max Number Among Given Three Number Using If/Else Statements

#include <iostream>

int main()
{
    int a, b, c;

    std::cout << "ENTER THREE NUMBERS: " << std::endl;
    std::cin >> a >> b >> c;

    if (a > b && a > c)
    {
        std::cout << a << " IS THE LARGEST AMONG ALL" << std::endl;
    }

    else
    {
        if (b > a && b > c)
        {
            std::cout << b << " IS LARGEST AMONG ALL" << std::endl;
        }

        else
            std::cout << c << " IS LARGEST AMONG ALL" << std::endl;
    }
    return (0);
}